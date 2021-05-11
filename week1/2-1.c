/* 2.pdf - 문제 1 */
// 질문 - (4), (8), (10), (11)
#include <stdio.h>

int main(void)
{   
    printf("TRUE: 1\t\tFALSE: 0\n");
    printf("(1) 3 && 1 || 0 : %d\n", 3 && 1 || 0);
    printf("(2) 5 - 1 != sizeof(int) : %d\n", 5 - 1 != sizeof(int));
    printf("(3) 3 == 4 ? 3-5 : 4%%3 : %d\n", 3 == 4 ? 3-5 : 4%3);
    printf("(4) 0 || !2 : %d\n", 0 || !2);
    printf("(5) ~~5 >> 2 << 3 << 1 : %d\n", ~~5 >>2 << 3 << 1);
    printf("(6) 3 / !0 == 0 : %d\n", 3 / !0 == 0);
    printf("(7) (double)((int) 3.4 + 5.5) : %.0lf\n", (double)((int) 3.4 + 5.5));
    printf("(8) 1 | 3 & 11 : %d\n", 1 | 3 & 11);
    printf("(9) sizeof 'a' + sizeof(char) : %lu\n", sizeof'a' + sizeof(char));
    int a, b; 
    printf("(10) int a, b; a= 1 : %d; b = a = 3; : %d\n", a = 1 , b = a = 3);
    a = 16;
    printf("(11) int a = 16; a << 2: %d; a <<=2; : %d\n", a <<2 , a <<=2);

    return 0;
}
