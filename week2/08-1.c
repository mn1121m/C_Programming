/* Practice08 - 실습문제 1 */
//질문
#include <stdio.h>

int main(void) 
{
    int num, i, j, k;
    printf("양의 정수 입력 : ");
    scanf("%d", &num);

    for(i = 0; i < num; i ++) {
        for(j = 0; j < num - i; j++) {
            printf(" ");
        }
        for(k = 0; k < i * 2 + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}   