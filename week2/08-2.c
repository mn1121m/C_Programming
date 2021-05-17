/* Practice08 - 실습문제 2 */
#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
    int a, b, max_com, temp;
    printf("두 정수 입력 : ");
    scanf("%d %d", &a, &b);

    max_com = gcd(a, b);
    printf("최대공약수 : %d\n", max_com);

    return 0;
}

int gcd(int a, int b)
{
    int i, gcd = 0;
    for(i = 1; i <= a ; i++) {
        if(a % i == 0 && b % i == 0) 
            gcd = i;
    }
    return gcd;
}

/*
출력결과
두 정수 입력 : 15 25
최대공약수 : 5
---------------------------
두 정수 입력 : 108 42
최대공약수 : 6
---------------------------
두 정수 입력 : 84 180
최대공약수 : 12
*/
