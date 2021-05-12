/* 3.pdf - 문제 3 */
#include <stdio.h>

int main(void)
{
    int num, i, j;
    
    printf("1에서 9사이의 정수 1개를 입력하세요 : ");
    scanf("%d", &num);

    for( i = 1 ; i <= num ; i++ ) {
        for( j = 0; j < i; j++) {
            printf("%d", j+1);
        }
        for( j = 0; j<= num-i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
1에서 9사이의 정수 1개를 입력하세요 : 7
1******
12*****
123****
1234***
12345**
123456*
1234567
*/