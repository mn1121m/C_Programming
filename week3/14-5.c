
/*
Practice14 -5   다시()
5. 3줄 문장을 입력받아 행마다 입력된 문자열에서 모든 단어를 추출하여 추출된 단어가 몇 개인지 
그리고 가장 긴 단어를 출력하는 프로그램을 작성하라. 
이때, 토큰은 빈칸, 쉼표(,), 마침표(.), 느낌표(!) 그리고 탭(＼t)으로 구분되는 단어이며 
긴 단어가 여러개 있을 경우 가장 먼저 나온 것을 출력한다. (2점)

소요시간: 1H 이상
- 질문 -
+ 14-4 를 제대로 이해못해서 그런지 도저히 감이 안와서 일단 최대한 끄적여보았습니다.
+ 저는 좀 복잡하게 문제를 푼것 같은데 이보다 더 쉬운 풀이가 있을까요 ?
*/
#include <stdio.h>
#include <string.h>

#define MAX_LINE_NUM 100

int main(void)
{
    char line[3][MAX_LINE_NUM] = {0, }, lineMax[MAX_LINE_NUM] = {0 ,};
    char *delimeter = " .,!\t", *ptr, *ptoken;
    int lineNum = 0, count = 0, i = 0; // Line number
    //lineMax :   string with the max length of a line (한 줄)

    printf("한 줄의 문자열에서 토큰을 추출하기\n");

    // //Read 3 lines
    while(gets(line[i])) {
        ptr = line[i];
        ptoken = strtok(ptr, delimeter);

        //Initialize max length in the current line
        strcpy(lineMax, ptoken);

        while(ptoken != NULL) {
            //get the token with the max length in the line
            if(strlen(lineMax) < strlen(ptoken)) {
                strcpy(lineMax, ptoken);
            }
            ptoken = strtok(NULL, delimeter);
            count++;
        }
        printf("strlen(%s) = %d\n", lineMax, strlen(lineMax));
        i++;
        if( i == 3 ) break;

    }
    //Print out the count
    printf("총 단어 갯수: %d\n", count);
  
    return 0;   
}

