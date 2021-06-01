/*
Practice16 - 3 다시()

소요: 1.5H
- 질문 -
소수점이하 부분에 대해서 정수부분과 같이 출력하는 방법을 모르겠습니다.
같이 출력하면서 재귀를 구현해야하는데 그 아이디어가 떠오르질 않습니다.
*/
#include <stdio.h>

#define TRUE 1

void printBin(int n);
void printFloatBin(double n);

int main(void)
{
    int num;

    printf("(10진수)실수 입력 : ");
    while(TRUE) {
        scanf("%d", &num);
        if(num == 0) 
            break;
        printBin(num);
        printFloatBin((double)num - int(num));
    }

    return 0;
}
void printBin(int n)
{
    if(n == 0 || n == 1)
        printf("%d", n);
    else {
        printBin(n / 2);
        printf("%d", n % 2);
    }
}