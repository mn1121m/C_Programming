/* 2.pdf - 문제 2 */
// 질문

#include <stdio.h>

int main(void)
{
    int x = 37;
    int bitmask = 0x00000020;

    printf("(1) x의 최하위로부터 6번째 자리의 비트값 : %d\n", x & bitmask);

    return 0;
}