#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include <inttypes.h>

/* example of using fixed-width types */

/* largest value we can apply 3x+1 to without overflow */
#define MAX_VALUE ((UINT64_MAX - 1) / 3)

int
main()
{
/*    int c = 1;
    while((c = getchar()) != EOF) {
        putchar(c);
    }
 WRONG */
    char c = 1;
    while((c = getchar()) != EOF) {  /*<- DON'T DO THIS! */
        putchar(c);
    }
    return 0;
}