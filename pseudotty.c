#define _XOPEN_SOURCE
#include <stdlib.h>
#include <stdio.h>

int
main(void)
{
    const char *s;
    s = ptsname(0);
    if(s) {
        printf("%s\n", s);
        return 0;
    }
    perror("pseudotty");
    return 2;
}
