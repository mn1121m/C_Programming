/*
Practice14 -4   다시()
4. 3줄 문장을 표준입력으로 입력받아 구두점의 수를 모두 세는 프로그램을 작성하시오. 
이때, 구두점 여부를 체크하기 위해 함수 ispunct()를 사용할 수 있다. (2점)

소요 : 2.5H
- 질문 -    => OK
+ ispunct() 함수로 => searching 
+ Ctrl + C : SIGINT Process 종료
+ Ctrl _ Z : SIGSTOP Proecss Stop
*/

#include <stdio.h>
#include <ctype.h>  // ispunct() -  매개변수가 구획문자(영문자, 숫자, 공백이외의 출력 가능한 문자)이면 0이 아닌 값을, 아니면 0을 반환
#include <string.h>

#define MAX_LINE_NUM 81

int main(void)
{
    char line[3][MAX_LINE_NUM] = {0, };
    int i = 0, j = 0, maxline = 0;
    unsigned int count = 0;

    printf("입력을 종료하려면 Ctrl+Z 를 누른 후 Enter를 입력하세요. \n");

    //fgets(버퍼, 버퍼의크기, file stream)
    while( fgets(line[i], sizeof(line[i]), stdin) ) {
        line[i++];
        maxline++;
        if(i == 3) break;
    }
    //포인터에서 NULL 표현할때 : NULL
    //문자열에서 NULL 표현할때 : '\0'

    for(i = 0; i < maxline; i ++) {
        printf("\n%d줄의 구두점\n", i+1);
        for(j = 0; line[i][j] != '\0'; j ++) {
            if(ispunct(line[i][j])) {
                printf("%c", line[i][j]);
                count++;
            }
        }
        printf("\n");
    }

    printf("구두점의 개수는 %d입니다. \n", count);
    return 0;
}
