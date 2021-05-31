/*
[문제]  다시(0)
4. 한 줄의 문자열을 표준입력으로 입력 받아 단어의 문자를 역순으로 출력하는 프로그램을 작성하시오.

=> 재귀함수에서는 재귀자체가 반복문이므로, while문같은 반복문을 쓸 수 없다.
*/
#define _CRT_SECURE_NO_WARNINGSc
#include <stdio.h>
#include <string.h>

#define MAX_ARY 100

void reverse(char *line);
int main(void)
{
    char line[MAX_ARY] = { 0,};
    char *delimeter = " .,";
    char *ptoken;

    printf("한 줄의 문장을 입력하세요. >>\n");
    fgets(line, sizeof(line), stdin);

    printf("\n입력한 각각의 단어를 반대로 출력합니다. >> ");
    ptoken = strtok(line, delimeter);
    while(ptoken) {
        reverse(ptoken);
        putchar(' ');
        ptoken = strtok(NULL, delimeter);
    }
    return 0;
}
void reverse(char *line)
{
    char ch = *line;
    if (ch) {
        reverse(++line);
        printf("%c", ch);
    }
    return;
}
/*
출력결과
한 줄의 문장을 입력하세요. >>
I can feel the sun whenever you're near

입력한 각각의 단어를 반대로 출력합니다. >> I nac leef eht nus revenehw er'uoy 
raen %                                                                              
*/