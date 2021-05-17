/* Practice08 - 실습문제 5 */
//다시()
#include <stdio.h>

int lcm(int x, int y);
int main(void)
{
    int n, m;

    printf("input(두 정수를 입력): ");
    scanf("%d %d", &n, &m); // 20 5

    printf("최소공배수 : %d\n", lcm(n,m));

    return 0;
}
int lcm(int x, int y)
{
    int i, gcd, lcm; 
    for(i = 1; i <= x && i <= y; i++) {
        if(x % i == 0 && y % i == 0)
            gcd = i;    // 최대공약수 5
    }
    lcm = (x * y) / gcd; // 최소공배수  120 / 5
    //최소공배수 = 두수의 곱 / 최대공약수
    return lcm;
}
/*
출력결과
----------------------------
input(두 정수를 입력): 3 7
최소공배수 : 21

input(두 정수를 입력): 39 91
최소공배수 : 273

input(두 정수를 입력): 35 91
최소공배수 : 455
----------------------------
*/