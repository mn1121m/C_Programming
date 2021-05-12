/* Pratice 10 - [문제]
3. 사용자로부터 정수 1개를 입력받고, 입력받은 정수의 Factorial을 계산하여 출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>

#define TRUE 1

long fact_nonrec(int a);
long fact_rec(int a);

int main(void)
{
    int num;
    long result;

    while(TRUE)
    {
        printf("양의 정수 1개를 입력하세요 (종료: 음수) : ");
        scanf("%d", &num);
        if(num >= 0) {
            result = fact_nonrec(num);
            printf("일반함수호출: %d! = %ld\n", num, result);
            result = fact_rec(num);
            printf("재귀함수호출: %d! = %ld\n", num, result);

        }
        else {
            printf("프로그램을 종료합니다. \n");
            return 0;
        }
        printf("\n");
    }
    
}

long fact_nonrec(int a)
{
    int i, res = 1;
    for(i = 1; i <= a; i ++ ) {
       res *= i; 
    }
    return res;
}

long fact_rec(int a)
{
    if(a <= 1) 
        return 1;
    else
        return (a * fact_rec(a-1));
}

/*
출력결과
==================================
양의 정수 1개를 입력하세요 (종료: 음수) : 5
일반함수호출: 5! = 120
재귀함수호출: 5! = 120

양의 정수 1개를 입력하세요 (종료: 음수) : 6
일반함수호출: 6! = 720
재귀함수호출: 6! = 720

양의 정수 1개를 입력하세요 (종료: 음수) : -1
프로그램을 종료합니다.
==================================
*/
