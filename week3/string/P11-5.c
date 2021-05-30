/*중요
[문제]  다시()
5. 한 행을 표준입력으로 입력 받은 문자열의 길이를 구하는 함수 mystrlen()을 구현하여 
라이브러리 strlen()과 결과를 비교하는 프로그램을 작성하시오.

*/
#include <stdio.h>
#include <string.h>

int mystrlen(const char* p);

int main(void)
{
    char str[100] = {0, };
    char *ptoken;
    char *delimeter = " .,";

    gets(str);
    ptoken = strtok(str, delimeter);
    
    while(ptoken) {
        printf("%s\t", ptoken);
        printf("%d\t%lu\n",mystrlen(ptoken),strlen(ptoken));

        ptoken = strtok(NULL, delimeter);
    }
    return 0;
}
int mystrlen(const char* p)
{
    int cnt = 0;

    while(*p) {
        cnt++;
        p++;
    }
    return cnt;
}
/*
출력결과
문제에 대한 환경에서는 한글 - 2byte 이고 (Windows)
내가 쓰고 있는 환경에서는 한글 - 3byte로 측정된다. (Mac OS)
참고로 영어 - 1byte 이다.
----------------------------------------------------
c언어는 조금 어렵지만 재미있는 언어입니다
c언어는 10      10
조금    6       6
어렵지만        12      12
재미있는        12      12
코드입니다      15      15
----------------------------------------------------
*/

