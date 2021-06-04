/*
'\n'과 같은 입력버퍼를 비우는 방법
1. fflush() : 일반적인 keyboard buffer (입력 버퍼) 을 비운다.
2. getchar() 
*/
#include <stdio.h>

int main(void)
{
    char temp;

    while(1) {
        scanf("%c", &temp); //enter까지 입략받기때문에 2개를 입력한 것임  -> 5'\n'
        getchar();          // '\n' 을 지운다.
        printf("%c", temp);
        //fflush(stdin);      // '\n' 를 지운다.
    }
    return 0;
}

int fflush(FILE * stream);
