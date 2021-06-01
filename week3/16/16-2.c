/*
Practice16 - 2 다시()

소요: 1H ~ 2H
- 질문 - 
정수로 배열없이 재귀를 구현하는 아이디어가 떠오르질 않습니다.
생각보다 문제 하나하나 다 생각이 나질 않네요..
*/
#include <stdio.h>

#define MAX_ARY_SIZE 128
#define TRUE 1
#define FALSE 0

int checkTwins(int a);

int main(void)
{
    int num;

    while(TRUE) {
        scanf("%d", &num);
        if(num == 0) break;
        
        if(checkTwins(num)) 
            printf("yes\n");
        else 
            printf("no\n");
    }

}
int checkTwins(int n)
{
    int flag = FALSE;

    if( n > 10) {
        if((n/10) == (n%10)) {
            checkTwins(n / 10);
            flag = TRUE;
        }
    }

    return flag;
}