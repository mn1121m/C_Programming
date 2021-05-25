/* Practice08 - 실습문제 5 */
//다시()
#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);  
int lcm2(int a, int b); //재귀

int main(void)
{
    int a, b;

    printf("input(a, b 입력): ");
    scanf("%d %d", &a, &b); // 20 5

    printf("gcd : %d\n", gcd(a, b));
    printf("lcm : %d\n", lcm(a, b));

    return 0;
}
int gcd(int a, int b)
{
    int temp, n;
    //a에 큰 값을 위치시키기 위한 조건문
    if(a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    //b = 0이 될때까지 (a%b), 반복문을 돌게한다. b = 0일때 a의 GCD(최대공약수)로 판단하고 return해준다.
    while(b) {
        n = a % b;
        a = b;
        b = n;
    }
    return a;
}
int lcm(int a, int b)
{
    int lcm;
    //최소공배수 = 두수의 곱 / 최대공약수
    lcm = (a * b) / gcd(a, b); 
    return lcm;
}

int lcm2(int a, int b)
{
    return a*b/gcd(a, b);
}
/*
출력결과
----------------------------
input(a, b 입력): 3 7
gcd : 1
lcm : 21

input(a, b 입력): 39 91
gcd : 13
lcm : 273

input(a, b 입력): 35 91
gcd : 7
lcm : 455
----------------------------
*/