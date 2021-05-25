/* Practice08 - 실습문제 2 
두 정수를 인자로 받아 두 수의 최대 공약수를 구하는 함수 int gcd(int a, int b)를 만들어보자. 
이 함수를 이용하여 사용자로부터 양의 정수 두 개를 입력받고 두 수의 최대 공약수를 출력하는 프로그램을 작성하시오. (2점)
*/
//유클리드 호제법
#include <stdio.h>

int gcd(int a, int b);
int gcd2(int a, int b);

int main(void)
{
    int a, b, max_com, temp;
    printf("두 정수 입력(a, b): ");
    scanf("%d %d", &a, &b);

    max_com = gcd(a, b);
    printf("최대공약수(gcd) : %d\n", max_com);

    return 0;
}

//반복문
int gcd(int a, int b)
{
    int temp, n;

    //a에 큰 값을 위치시키기 위한 조건문
    if(a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    //유클리드 알고리즘
    //b = 0이 될때까지 (a%b), 반복문을 돌게한다. b = 0일때 a의 GCD(최대공약수)로 판단하고 return해준다.
    while(b) {
        n = a % b;
        a = b;
        b = n;
    }
    return a;   //GCD 
}

//recursive
int gcd2(int a, int b)
{
    if(b == 0) {
        return a;
    }else {
        return gcd2(b, a%b);
    }
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
