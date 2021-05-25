/*
[문제]
4. 다음 내용을 참고로 프로그램의 빈 부분에 들어갈 소스를 작성하시오.
다시()
*/

#include <stdio.h>

#define N_MAX 100
unsigned int fibonacci(unsigned int n);
int main(void)
{
    printf("fibonacci (%d) = %d\n", 5, fibonacci(5));

    return 0;
}

unsigned int fibonacci(unsigned int n)
{
    static int nCount[N_MAX] = {0, }, count = 0;    //초기화 꼭 해줘야한다.
    
    printf("\t fibonacci(%d) %d회 호출, 총 %2d회 호출\n", n, ++nCount[n], ++count);

    if(n < 2)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}