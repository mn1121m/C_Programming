/*
Practice14 -1   다시()
1. 한 줄의 문장을 표준입력으로 입력받아 각각의 단어를 구성하는 문자를 역순으로 출력하는 프로그램을 작성하시오. (2점)

소요: 1H
*/

#include <stdio.h>
#include <string.h>

#define MAX_ARY 100

void reverse(char *line);

int main(void)
{
    char line[MAX_ARY] = {0, };
    char *delimeter = " ";
    char *pword;

    printf("문자열을 입력하세요 : ");
    gets(line);
    printf("입력한 문자열 출력 => : %s\n", line);
    
    printf("입력한 문자열 역순으로 출력 => : ");
    pword = strtok(line, delimeter);
    while(pword != '\0') {
        reverse(pword);
        putchar(' ');   // => 각각의 문자열을 출력할때 문자사이에 공백을 넣기위해서이다.
        pword = strtok(NULL, delimeter);
    }
    return 0;
}
void reverse(char *line)
{
    char ch = *line;    //ch = *line,   포인터로 접근
    if(ch) {
        reverse(++line);
        printf("%c", ch);
    }
}

/*
출력결과

char a[] = “cars”;

rahc ][a = ;“srac”
*/