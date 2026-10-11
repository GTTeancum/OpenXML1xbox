/* Header framing fixture only. Native source registration and pin lifetimes
 * require the real guest bridge, not these boundary callbacks. */
#include "engine/progression/talent_identity_save.h"
#include "engine/progression/talent_identity_guest.h"
#include <string.h>
unsigned xml1_talent_identity_write(void *output,unsigned capacity) {
    const xml1_saved_talent_identity item={42,"example","data/talents/example.xml","Talent:example;Talents"};
    return (unsigned)xml1_talent_identities_write(output,capacity,&item,1);
}
int xml1_talent_identity_load(uint32_t stream,const void *input,unsigned size) {
    xml1_saved_talent_identity item;unsigned count=0;
    return stream&&xml1_talent_identities_read(input,size,&item,1,&count)==size&&count==1&&item.id==42&&!strcmp(item.name,"example");
}
void xml1_talent_identity_load_end(void) {}
unsigned xml1_talent_identity_remap(uint32_t stream,unsigned id){(void)stream;return id;}
