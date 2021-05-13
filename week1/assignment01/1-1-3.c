/* 1.pdf - 문제 1 */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
    printf("수식에 대한 평가값( TRUE: 1 / FALSE: 0\n");
    printf("\n");
    printf("(5>2) && (3==2) : %d\n", (5>2) && (3==2));
    printf("(5>2) || (3==2) : %d\n", (5>2) || (3==2));
    printf("!(3 == 2) : %d\n", !(3 == 2));
    printf("3 && 4 : %d\n", 3 && 4 );
    printf("0.0 && 4 : %d\n", 0.0 && 4);
    printf("1 && 1 : %d\n", 1 && 1);
    printf("(3>4) || !(4==1) : %d\n", (3>4) || !(4 ==1));
    printf("0.3 || 0.2 : %d\n", 0.3 || 0.2 );
    printf(" 1 || 0 : %d\n", 1 ||0 );

    return 0;
}