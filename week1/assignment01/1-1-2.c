/* 1.pdf - 문제 1 */

#include <stdio.h>

int main(void)
{
    int x = 0, y = 0;
    printf("x = 0, y = 0\n");
    printf(" x && y = %d\n", x&&y);
    printf(" x || y = %d\n", x||y);
    printf(" !x = %d\n", !x);
    printf("\n");

    x = 0, y = 1;
    printf("x = 0, y = 1\n");
    printf(" x && y = %d\n", x&&y);
    printf(" x || y = %d\n", x||y);
    printf(" !x = %d\n", !x);
    printf("\n");

    x = 1, y = 0;
    printf("x = 1, y = 0\n");
    printf(" x && y = %d\n", x&&y);
    printf(" x || y = %d\n", x||y);
    printf(" !x = %d\n", !x);
    printf("\n");

    x = 1, y = 1;
    printf("x = 1, y = 1\n");
    printf(" x && y = %d\n", x&&y);
    printf(" x || y = %d\n", x||y);
    printf(" !x = %d\n", !x);

    
    return 0;
}