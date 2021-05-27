/*
[문제]  다시()
5. 한 행을 표준입력으로 입력 받은 문자열의 길이를 구하는 함수 mystrlen()을 구현하여 라이브러 리 strlen()과 결과를 비교하는 프로그램을 작성하시오.

-질문 -
+ 문제4번과 같은 오류가 뜹니다. => warning: this program uses gets(), which is unsafe.
+ 그리고 문제5번에 대한 출력결과랑 다른데, 어떤점을 고쳐야 하는지 못찾겠습니다.
*/
#include <stdio.h>
#include <string.h>

int mystrlen(const char* p);
int main(void)
{
    char str[100] = {0,};
    char *ptoken;
    char *delimeter = " .,";

    gets(str);
    ptoken = strtok(str, delimeter);
    
    while(ptoken != NULL) {
        printf("%s", ptoken);
        printf("\t%d\t%lu\n",mystrlen(ptoken),strlen(ptoken));

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
----------------------------------------------------
warning: this program uses gets(), which is unsafe.
 c언어는 조금 어렵지만 재미있는 언어입니다
c언어는 10      10
조금    6       6
어렵지만        12      12
재미있는        12      12
언어입니다      15      15
----------------------------------------------------
*/