/* Practice08 - 실습문제 4 */
/* if <----> else if */
#include <stdio.h>

int sumMutiple(int start, int end, int x);
int main(void)
{
    int n, m, a = 1, b, start, end; //a, b는 서로소인지 아닌지 구별하기 위해 쓴 것.
    int sum1, sum2, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0;    //합 (1) ~ (6)
    int i;
    printf("start, end, n, m 입력: ");
    scanf("%d %d %d %d",&start, &end, &n, &m);

    //서로소일 경우 b = 1; 아니면 b > 1
    if(n > m) {
        while(a <= m) {
            if(n % a == 0 && m % a == 0)
                b = a;
            a++;
        }
    }
    else {
        while(a <= n) {
            if(n % a == 0 && m % a == 0)
                b = a;
            a++;
        }
    }
    if( b > 1) 
        printf("두수는 서로소가 아닙니다. \n"); 

    //서로소일 경우
    else {
        sum1 = sumMutiple(start, end, n); //n 배수의 합
        printf("%d\n", sum1);
        sum2 = sumMutiple(start, end, m); //m 배수의 합
        printf("%d\n", sum2);
        for(i = start; i <end; i++) {
            if(i % n == 0 && i % m == 0) {
                sum3 += i;
            }
            if(i % n == 0 || i % m == 0) {
                sum4 += i;
            }
            if(i % n != 0 && i % m == 0) {
                sum5 += i;
            }
            if(i % n != 0 && i % m != 0) {
                sum6 += i;
            }
        }
    }
    printf("%d\n", sum3);   
    printf("%d\n", sum4);
    printf("%d\n", sum5);
    printf("%d\n", sum6);
    return 0;
}
int sumMutiple(int start, int end, int x)
{
    int i, sum = 0;

    for(i =start; i < end; i++) {
        if(i % x == 0) {
            sum += i;
        }
    }
    return sum;
}

/*
출력결과
--------------------------------
start, end, n, m 입력: 1 9 2 3
20
9
6
23
3
13

start, end, n, m 입력: 20 30 4 5
72
45
20
97
25
148

start, end, n, m 입력: 10 20 7 3
14
45
0
59
45
86
--------------------------------
*/
