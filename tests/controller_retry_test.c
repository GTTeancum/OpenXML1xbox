#include "../src/controller_retry.h"
#include <stdio.h>
#define CHECK(x) do {if(!(x)) {fprintf(stderr,"FAIL line %d\n",__LINE__);return 1;}}while(0)
int main(void) {
    xml1_controller_retry state={0};
    CHECK(xml1_controller_probe_due(&state,0,0));
    xml1_controller_probe_result(&state,0,0,1167);
    for(unsigned ms=0;ms<2000;++ms)CHECK(!xml1_controller_probe_due(&state,0,ms));
    CHECK(xml1_controller_probe_due(&state,1,1));
    CHECK(xml1_controller_probe_due(&state,0,2000));
    xml1_controller_probe_result(&state,0,2000,0);
    CHECK(xml1_controller_probe_due(&state,0,2000));
    xml1_controller_probe_result(&state,0,2001,1167);
    CHECK(!xml1_controller_probe_due(&state,0,4000));
    CHECK(xml1_controller_probe_due(&state,0,4001));
    xml1_controller_probe_result(&state,0,4001,87); /* other errors are not absence */
    CHECK(xml1_controller_probe_due(&state,0,4001));
    CHECK(!xml1_controller_probe_due(&state,4,4001));
    puts("PASS disconnected backoff, reconnect deadline, immediate connected sampling, independent slots and error retry");return 0;
}
