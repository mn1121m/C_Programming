/* 구구단을 출력하는 프로그램 */
#include <stdio.h>

int main(void)
{
    int i, j;
    for(i = 1; i <= 9; i++) {
        for(j = 1; j <=9; j++) {
            printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}