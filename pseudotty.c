#define _XOPEN_SOURCE
#include <stdlib.h>
#include <stdio.h>

int
main(void)
{
    const char *s;
    int fd = 0;
    s = ptsname(fd);
    if(!s) {
        goto ptsnameError;
    }
    int e;
    e = grantpt(fd);
    if(e) {
        goto grantptError;
    }
    printf("%s\n", s);
    return 0;

grantptError:
ptsnameError:
    perror("pseudotty");
    return 2;
}
