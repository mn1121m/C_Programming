/*
Practice14 -2
2. 정수 형태의 문자열을 정수 값으로 바꾸는 함수를 만드시오. 입력한 수는 라이브러리 함수 atoi() 및 사용자 정의 함수를 사용하여 각각 정수로 변환하여 15를 더하여 출력한다. 
예를들어, 실행 시 문자열 “1234”를 입력받아 정수 1234 형태로 바꾸고 1234+15를 계산하여 1249를 출력하여야 한다. (2점)

소요: 20M
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 100

int main(void)
{
    char num_str[MAX_STR] = {0, };
    int num;

    printf("문자열 입력 : ");
    scanf("%s", num_str);
    num = atoi(num_str);

    printf("%d + 15 = %d\n", num, num+15);

    return 0;
}