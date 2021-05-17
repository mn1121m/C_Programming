/* Practice08 - 실습문제 3 */
#include <stdio.h>

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
    int i, bool;
    for(i = 2; i<= x; i++) {
        if(x % i == 0 && i < x) {   //not prime = 소수x
            bool = 0;
            return bool;
        }
        else
            bool = 1;
    }
    return bool;
}