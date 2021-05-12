/* 3.pdf - 문제 2 
사용자가 입력한 n개의 정수를 입력받아 합계와 최대값을 출력하는 프로그램을 작성하시오
*/
#include <stdio.h>

int main(void)
{
    int num, i, sum = 0, max = 0;
    printf("정수 10개를 입력하세요 : ");
    
    for(i = 0; i < 10 ; i ++ ) {
        scanf("%d", &num);
        sum += num;
        if( max < num) {
            max = num;
        }
    }
    printf("누적합 : %d\n", sum);
    printf("최대값: %d\n", max);

    return 0;
}
/*
정수 10개를 입력하세요 : 8 23 71 5 0 1 2 1 10 20
누적합 : 141
최대값: 71
*/