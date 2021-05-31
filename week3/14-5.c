/*
중요
Practice14 -5   다시(0)(0)
5. 3줄 문장을 입력받아 행마다 입력된 문자열에서 모든 단어를 추출하여 추출된 단어가 몇 개인지 
그리고 가장 긴 단어를 출력하는 프로그램을 작성하라. 
이때, 토큰은 빈칸, 쉼표(,), 마침표(.), 느낌표(!) 그리고 탭(＼t)으로 구분되는 단어이며 
긴 단어가 여러개 있을 경우 가장 먼저 나온 것을 출력한다. (2점)

소요시간: 1H 이상
- 질문 - 

*/
#include <stdio.h>
#include <string.h>

#define MAX_LINE_SIZE 256

int main(void)
{
    //lineMax :   string with the max length of a line (한 줄)
    char line[3][MAX_LINE_SIZE] = {0, }, lineMax[MAX_LINE_SIZE] = {0 ,};
    char *delimeter = " .,!\t", *ptr, *ptoken;
    int count = 0, i = 0;

    printf("총 3줄을 입력하세요\n\n");

    // Read 3 lines
    for(i = 0; i < 3; i ++ ) {
        fgets(line[i], sizeof(line[i]), stdin);
        ptr = line[i];
        ptoken = strtok(ptr, delimeter);

        //Initialize max length in the current line
        strcpy(lineMax, ptoken);

        while(ptoken != NULL ) {
            //get the token with the max length in the line
            if(strlen(lineMax) < strlen(ptoken)) {
                strcpy(lineMax, ptoken);
            }
            ptoken = strtok(NULL, delimeter);
            count++;
        }
        //각 길이중 가장 큰 길이, 갯수
        //printf("\nstrlen(%s) = %d\n", lineMax, strlen(lineMax)-1);

    }
    //Print out the count
    printf("\n총 단어 갯수: %d\n", count);
    printf("가장 큰 길이: %s\n", lineMax);
  
    return 0;   
}

/*
총 3줄을 입력하세요
int ispunct( int c )
Returns a true value if c is a printing character other than 
a space, a digit, or a letter and returns 0 otherwise.
총 단어 갯수: 30
가장 큰 길이: otherwise
*/