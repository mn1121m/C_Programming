/*
[문제]
4. 한 줄의 문자열을 표준입력으로 입력 받아 단어의 문자를 역순으로 출력하는 프로그램을 작성하 시오.
질문 - gets, putchar 왜 warning이 나오는지 잘 모르겠습니다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_ARY 100

void reverse(char *line);
int main(void)
{
    char line[MAX_ARY] = { 0,};
    char *delimeter = " ',";
    char *ptoken;

    printf("한 줄의 문장을 입력하세요. >>\n");
    gets(line);
    printf("입력한 각각의 단어를 반대로 출력합니다. >>\n");
    ptoken = strtok(line, delimeter);
    while(ptoken != NULL) {
        reverse(ptoken);
        putchar(' ');
        ptoken = strtok(NULL, delimeter);
    }

    return 0;
}
void reverse(char *line)
{
    char *ch = line;
    while(ch) {
        reverse(++line);
        printf("%s", ch);
    }
    return;
}
/*
출력결과
한 줄의 문장을 입력하세요. >>
warning: this program uses gets(), which is unsafe.
*/