// This file is part of Cxbe
// SPDX-License-Identifier: GPL-2.0-or-later

// SPDX-FileCopyrightText: 2002-2003 Aaron Robinson <caustik@caustik.com>
// SPDX-FileCopyrightText: 2019 Jannik Vogel
// SPDX-FileCopyrightText: 2021 Stefan Schmidt

#include "Common.h"
#include "Exe.h"
#include "Xbe.h"

#include <string.h>

// Preserve the original title's identity and save/network key material while
// retaining the new executable's name and homebrew media/region permissions.
static bool ImportTitleCertificate(Xbe *target, const char *path)
{
    FILE *file = fopen(path, "rb");
    if(!file) return false;
    uint32 header[0x178 / 4] = {};
    Xbe::Certificate original = {};
    bool valid = fread(header, sizeof(header), 1, file) == 1 &&
                 header[0] == 0x48454258 && header[0x118 / 4] >= header[0x104 / 4];
    if(valid)
    {
        uint32 offset = header[0x118 / 4] - header[0x104 / 4];
        valid = offset < 0x10000 && fseek(file, offset, SEEK_SET) == 0 &&
                fread(&original, sizeof(original), 1, file) == 1 &&
                original.dwSize >= sizeof(original);
    }
    fclose(file);
    if(!valid) return false;
    Xbe::Certificate &cert = target->m_Certificate;
    cert.dwTitleId = original.dwTitleId;
    cert.dwGameRatings = original.dwGameRatings;
    cert.dwDiskNumber = original.dwDiskNumber;
    cert.dwVersion = original.dwVersion;
    memcpy(cert.dwAlternateTitleId, original.dwAlternateTitleId, sizeof(cert.dwAlternateTitleId));
    memcpy(cert.bzLanKey, original.bzLanKey, sizeof(cert.bzLanKey));
    memcpy(cert.bzSignatureKey, original.bzSignatureKey, sizeof(cert.bzSignatureKey));
    memcpy(cert.bzTitleAlternateSignatureKey, original.bzTitleAlternateSignatureKey, sizeof(cert.bzTitleAlternateSignatureKey));
    return true;
}

// program entry point
int main(int argc, char *argv[])
{
    char szErrorMessage[ERROR_LEN + 1] = { 0 };
    char szExeFilename[OPTION_LEN + 1] = { 0 };
    char szXbeFilename[OPTION_LEN + 1] = { 0 };
    char szDumpFilename[OPTION_LEN + 1] = { 0 };
    char szXbeTitle[OPTION_LEN + 1] = "Untitled";
    char szMode[OPTION_LEN + 1] = "retail";
    char szLogo[OPTION_LEN + 1] = "";
    char szDebugPath[OPTION_LEN + 1] = "";
    char szTitleCert[OPTION_LEN + 1] = "";
    bool bRetail;

    const char *program = argv[0];
    const char *program_desc = "CXBE EXE to XBE (win32 to Xbox) Relinker (Version: " VERSION ")";
    Option options[] = {
        { szExeFilename, NULL, "exefile" },         { szXbeFilename, "OUT", "filename" },
        { szDumpFilename, "DUMPINFO", "filename" }, { szXbeTitle, "TITLE", "title" },
        { szMode, "MODE", "{debug|retail}" },       { szLogo, "LOGO", "filename" },
        { szDebugPath, "DEBUGPATH", "path" },       { szTitleCert, "TITLECERT", "original-xbe" },
        { NULL }
    };

    if(ParseOptions(argv, argc, options, szErrorMessage))
    {
        goto cleanup;
    }

    if(CompareString(szMode, "RETAIL"))
        bRetail = true;
    else if(CompareString(szMode, "DEBUG"))
        bRetail = false;
    else
    {
        strncpy(szErrorMessage, "invalid MODE", ERROR_LEN);
        goto cleanup;
    }

    if(strlen(szXbeTitle) > 40)
    {
        printf("WARNING: Title too long, trimming\n");
        szXbeTitle[40] = '\0';
    }

    // verify we received the required parameters
    if(szExeFilename[0] == '\0')
    {
        ShowUsage(program, program_desc, options);
        return 1;
    }

    // if we don't have an Xbe filename, generate one from szExeFilename
    if(szXbeFilename[0] == '\0')
    {
        if(GenerateFilename(szXbeFilename, ".xbe", szExeFilename, ".exe"))
        {
            strncpy(szErrorMessage, "Unable to generate Exe Path", ERROR_LEN);
            goto cleanup;
        }
    }

    // open and convert Exe file
    {
        Exe *ExeFile = new Exe(szExeFilename);

        if(ExeFile->GetError() != 0)
        {
            strncpy(szErrorMessage, ExeFile->GetError(), ERROR_LEN);
            goto cleanup;
        }

        std::vector<uint08> logo;
        std::vector<uint08> *LogoPtr = nullptr;
        if(szLogo[0] != '\0')
        {
            logo = pgmToLogoBitmap(szLogo);
            logo = Xbe::ImageToLogoBitmap(logo);
            LogoPtr = &logo;
        }

        Xbe *XbeFile = new Xbe(ExeFile, szXbeTitle, bRetail, LogoPtr, szDebugPath);

        if(szTitleCert[0] && !ImportTitleCertificate(XbeFile, szTitleCert))
        {
            strncpy(szErrorMessage, "Unable to import original title certificate", ERROR_LEN);
            goto cleanup;
        }

        if(XbeFile->GetError() != 0)
        {
            strncpy(szErrorMessage, XbeFile->GetError(), ERROR_LEN);
            goto cleanup;
        }

        if(szDumpFilename[0] != 0)
        {
            FILE *outfile = fopen(szDumpFilename, "wt");
            XbeFile->DumpInformation(outfile);
            fclose(outfile);

            if(XbeFile->GetError() != 0)
            {
                if(XbeFile->IsFatal())
                {
                    strncpy(szErrorMessage, XbeFile->GetError(), ERROR_LEN);
                    goto cleanup;
                }
                else
                {
                    printf("DUMPINFO -> Warning: %s\n", XbeFile->GetError());
                    XbeFile->ClearError();
                }
            }
        }

        XbeFile->Export(szXbeFilename);

        if(XbeFile->GetError() != 0)
        {
            strncpy(szErrorMessage, XbeFile->GetError(), ERROR_LEN);
            goto cleanup;
        }
    }

cleanup:

    if(szErrorMessage[0] != 0)
    {
        ShowUsage(program, program_desc, options);

        printf("\n");
        printf(" *  Error : %s\n", szErrorMessage);

        return 1;
    }

    return 0;
}
