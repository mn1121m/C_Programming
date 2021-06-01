/*
Practice15 - 3
다시()
소요: 2H 이상
*/

#include <stdio.h>
#include <string.h>

#define MAX_NAME_SIZE 128

#define TRUE 1

typedef struct {
    char firstName[MAX_NAME_SIZE];
    char secondName[MAX_NAME_SIZE];
    char subject[MAX_NAME_SIZE];
    int score;
} Record;

void printRec(Record *r, int size);

int main(void)
{
    int debugCount = 0;
    int recNum = 0;
    Record record[MAX_NAME_SIZE];

    //input
    printf("[입력] : 학생이름\t과목이름\t점수\n");
    while(TRUE) {
        debugCount ++;
        scanf("%s", record[recNum].firstName);
        if(strcmp(record[recNum].firstName, "quit") == 0) 
            break;
        scanf("%s %s %d",  
        record[recNum].secondName, 
        record[recNum].subject, 
        &(record[recNum].score)
        );
        getchar();  //scanf() enter방지하기 위함.
        printf("[DEBUG] : %d\n", debugCount);
        record[recNum].secondName[strlen(record[recNum].secondName) - 1] = '\0'; // , -> '\0'
        record[recNum].subject[strlen(record[recNum].subject) - 1] = '\0';
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
        printf("%s %s \t %s \t %d\n", r[i].firstName, r[i].secondName, r[i].subject, r[i].score);
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