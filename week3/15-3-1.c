/*
15-3 strtok()을 활용한 풀이
다시()
*/
#include <stdio.h>
#include <string.h>

#define MAX_STR_SIZE 128
#define MAX_BUF_SIZE 128

#define TRUE 1
#define FALSE 0

typedef struct {
    char firstName[MAX_STR_SIZE];
    char secondName[MAX_STR_SIZE];
    char subject[MAX_STR_SIZE];
    int score;
} Record;

void printRec(Record *r, int size);

int main(void)
{
    int recNum = 0;
    Record record[MAX_STR_SIZE];
    char buf[MAX_BUF_SIZE];
    char *token, *delimeter =" ,";

    //input
    printf("[입력] : 학생이름\t과목이름\t점수\n");
    while(TRUE) {
        fgets(buf, sizeof(buf), stdin); //enter포함하고 있음. '\n'
        buf[strlen(buf) - 1] = '\0';    //enter포함하고 있는 '\n' 자리에 '\0'을 넣어버리면 됩니다.
        
        token = strtok(buf, delimeter);
        if (strcmp(token, "quit") == 0) break;
        //"quit" 아닐시 아래와 같이 실행
        strcpy(record[recNum].firstName, token);

        token = strtok(NULL, delimeter);
        strcpy(record[recNum].secondName, token);

        token = strtok(NULL, delimeter);
        strcpy(record[recNum].subject, token);
        
        token = strtok(NULL, delimeter);
        //  *중요*
        sscanf(token, "%d", &(record[recNum].score)); //token -> record[recNum].score 주소값에 넣는다.

        recNum ++;
    }
    //print
    printf("\n[결과]\n");
    printRec(record, recNum);

    return 0;
}

void printRec(Record *r, int size)
{   
    int i, sum = 0;

    for(i = 0; i < size; i ++) {
        printf("%s %s\t %s\t %d\n", r[i].firstName, r[i].secondName, r[i].subject, r[i].score);
        sum += r[i].score;
    }
    printf("avg = %d\n", sum/size);
}
/*
kim nemo, math, 90
lee minwoo, eng, 80 
lee miso, eng, 100 
park chul, math, 50 
quit 

kim nemo    math    90 
lee minwoo  eng     80
lee miso    eng     100
park chul   math    50
avg=80
*/