/* 4.pdf - 문제 4 */
//temp 사용하는 이유

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1

int main(void)
{
    int count = 0;
    char answer, ch;
    char temp;  // scanf를 하고 enter를 치면 공간이 한번 더 넘어간다. 한번더 넘어가는 것을 방지하기 위해 temp를 함으로써 공간을 하나 만든다.

    printf("저장할 알파벳 소문자 하나를 적으시오.\n");
    scanf("%c", &answer);
    scanf("%c", &temp);

    printf("알파벳 소문자 하나를 추측해 보시오.\n");
    scanf("%c", &ch);
    scanf("%c", &temp);

    do 
    {
        count++;
        printf("시도횟수 : %d\n", count);
        if((int)ch == (int)answer) {
            printf("정답입니다! 시도횟수는 %d번!\n",count);
            break;
        } else if((int)ch < (int)answer) {
            printf("입력한 문자의 아스키 코드 값이 더 작습니다.\n");
        } else {
            printf("입력한 문자의 아스키 코드 값이 더 큽니다.\n");
        }
        scanf("%c", &ch);
        scanf("%c", &temp);
    } while(TRUE);
    
    return 0;
}
/*
저장할 알파벳 소문자 하나를 적으시오.
k
알파벳 소문자 하나를 추측해 보시오.
g
시도횟수 : 1
입력한 문자의 아스키 코드 값이 더 작습니다.
x
시도횟수 : 2
입력한 문자의 아스키 코드 값이 더 큽니다.
n
시도횟수 : 3
입력한 문자의 아스키 코드 값이 더 큽니다.
k
시도횟수 : 4
정답입니다! 시도횟수는 4번!
*/