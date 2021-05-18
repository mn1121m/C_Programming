/*
[문제]
4. 다음 내용을 참고로 프로그램의 빈 부분에 들어갈 소스를 작성하시오.
질문 - unsigned int fibonacci 안의 빈칸에 뭐를 써야할지 모르겠습니다.
*/
#include <stdio.h>

unsigned int fibonacci(unsigned int n);
int main(void)
{
    printf("fibonacci (%d) = %d\n", 5, fibonacci(5));

    return 0;
}

unsigned int fibonacci(unsigned int n)
{
    int cnt[n], count;


    printf("\t fibonacci(%d) %d회 호출, 총 %2d회 호출\n", n, ++cnt[n], ++count);

    if(n < 2)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}