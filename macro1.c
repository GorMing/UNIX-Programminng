#include <stdio.h>

#define CONN(parm1, parm2) (parm1##parm2)

#define CONNSTR(parm1, parm2) (parm1 parm2)
#define TOSTR(parm) (#parm)

int main()
{
    printf("Connect two integers: %d\n", CONN(10, 20));
    printf("Connect two strings: %s\n", CONNSTR("10", "10"));
    
    printf("Convert to String: %s\n", TOSTR(123));
    
    
    return 0;
}
