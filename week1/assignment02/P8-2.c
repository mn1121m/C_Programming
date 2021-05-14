/*  Pratice 08 - [문제]
2. 다음을 참고하여 표준입력으로 받은 int형 두 정수에 대해 사칙연산을 수행하는 프로그램을 작 성하시오.
*/

#include <stdio.h>

int main(void) 
{
    double i;
    int *p = &i;
    char temp, op;

    printf("두 정수 입력 : ");
    scanf("%d %d", p, p+1);
    scanf("%c", &temp);
    
    printf("사칙 연산 입력 : ");
    scanf("%c", &op);

    switch (op)
    {
    case '+': printf("%d + %d = %d\n", *p, *(p+1), *p + *(p + 1));
        break;
    case '-': printf("%d - %d = %d\n", *p, *(p+1), *p - *(p + 1));
        break;
    case '*': printf("%d * %d = %d\n", *p, *(p+1), *p * *(p + 1));
        break;
    case '/': printf("%d / %d = %d\n", *p, *(p+1), *p / *(p + 1));
        break;
    
    default: printf("다시 입력해주세요 \n");
        break;
    }
    return 0;
}

/*
출력결과
---------------------------------------------
두 정수 입력 : 1 2
사칙 연산 입력 : +
1 + 2 = 3

두 정수 입력 :  4 5
사칙 연산 입력 : *
4 * 5 = 20

두 정수 입력 : 8 2
사칙 연산 입력 : /
8 / 2 = 4
---------------------------------------------
*/