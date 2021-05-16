/*  Pratice 08 - [문제]
4. 다음과 같이 int형 변수 i에 대해 0x3C405B7B를 정의하고, 
char* 변수 p를 선언한 후, 포인터 변수가 다음 내용 5B인 문자 ‘[’를 가리키도록 하여 
다음 조건이 만족하는 프로그램을 작성하시오.
질문 - *(p)++; <----> *p++; 차이
*/

#include <stdio.h>

int main(void)
{
    int n = 0x3C405B7B, i;
    char* p = (char*)&n, ch;

    ch = *p;
    for(i = 0 ; i < 4; i ++) {
        *p++;
        printf("%c\t", *(p + i));
        *p--;
    }
    return 0;
}

/*
출력결과
----------------------------------------
[       @       <     
*/