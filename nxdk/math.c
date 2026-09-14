#include <math.h>
/* These C99 functions are assertion stubs in the installed NXDK PDCLib.
   Generated x87 FYL2X/F2XM1 operations require working implementations. */
double log2(double value)
{
    double result;
    __asm__ volatile("fld1; fldl %1; fyl2x; fstpl %0":"=m"(result):"m"(value):"st","st(1)");
    return result;
}
float log2f(float value){return (float)log2((double)value);}
long double log2l(long double value){return (long double)log2((double)value);}
double exp2(double value)
{
    if(isnan(value))return value;
    if(value>=1024.0)return INFINITY;
    if(value<=-1075.0)return 0.0;
    double whole=floor(value),fraction=value-whole,result;
    __asm__ volatile("fldl %1; fldl %2; f2xm1; fld1; faddp; fscale; fstpl %0; fstp %%st(0)"
                     :"=m"(result):"m"(whole),"m"(fraction):"st","st(1)","st(2)");
    return result;
}
float exp2f(float value){return (float)exp2((double)value);}
long double exp2l(long double value){return (long double)exp2((double)value);}
