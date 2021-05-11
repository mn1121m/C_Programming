/* 1.pdf - 문제 2 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void) 
{
    int a = 5, b = 10, c = 15, d = 20;
    printf(" TRUE : 1 \t FALSE : 0\n");
    printf("(1) a + ++b = %d\n", a + ++b);
    printf("(2) a && 0 = %d\n", a && 0);
    printf("(3) b + c %% a = %d\n", b + c % a); 
    printf("(4) c / b = %d\n", c / b);
    printf("(5) d - c-- = %d\n", d - c--);
    printf("(6) a %% 4 + b + d/b = %d\n", a % 4 + b + d/b);
    printf("(7) d - a + c%%8 = %d\n", d - a + c%8);
    printf("(8) (b > c) -d = %d\n", (b > c) -d);
    printf("(9) (b != 10) && (c >= d) = %d\n", (b != 10) && (c >= d));
    printf("(10) a + b++ - --d = %d\n", a + b++ - --d);

    return 0;
}