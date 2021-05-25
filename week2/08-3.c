/* Practice08 - 실습문제 3
사용자로부터 양의 정수를 입력받고, 입력된 정수가 소수인지 아닌지 판별하는 프로그램을 작성한 코드이다. 
아래 코드를 보고 빈 칸에 들어갈 알맞은 코드를 작성하시오. (2점)
*/
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int isPrime(int x);
int main(void)
{
    int x;

    printf("양의 정수 입력 : ");
    scanf("%d", &x);

    printf("%s",isPrime(x) ? "prime\n" : "not prime\n");
    return 0;
}
int isPrime(int x)
{
    int i;
    for(i = 2; i<= x; i++) {
        if(x % i == 0 && i < x)    //not prime = 소수x
            return FALSE;
    }
    return TRUE;
}