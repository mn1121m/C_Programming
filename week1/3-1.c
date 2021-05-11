/* 3.pdf - 문제 1 */
//질문 - 오류 => 결과: 5의 배수뿐만 아니라 2의배수도 제외한 모든 홀수로 출력되어있음.
#include <stdio.h>

int main(void)
{
    int n, i;
    printf("정수 1개를 입력하세요 : ");
    scanf("%d", &n);

    printf("2와 5의 배수를 제외한 모든 홀수 : ");
    for(i = 1; i <= n; i ++ ) {
        if( i % 5 == 0) {
            continue; 
        }else if( i % 2 == 0) {
            continue;
        }else 
            printf("%d ", i);
    }
    return 0;
}

/*
정수 1개를 입력하세요 : 30
5의 배수를 제외한 모든 홀수 : 1 3 7 9 11 13 17 19 21 23 27 29 %   
*/