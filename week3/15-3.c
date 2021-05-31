/*
Practice15 - 3

-질문-
strtok() 함수를 이용해서 구하는건데, while()문안에 어떻게 구현해야할지 모르겠습니다.

소요: 1.5H 이상
*/

#include <stdio.h>
#include <string.h>

#define MAX_NAME_SIZE 128
#define MAX_STR 128

#define TRUE 1

typedef struct {
    char name[MAX_NAME_SIZE];
    char subject[MAX_NAME_SIZE];
    int score;
} score;

void calsum(score *r);
void printRec(score r);

int main(void)
{
    score std[MAX_STR];
    char *delimeter = ",", *ptoken;
    int i = 0, count = 0;
    double avg;

    //input
    printf("학생이름\t과목이름\t점수 입력하세요 \n");
    scanf("%s %s %d", std[i].name, std[i].subject, &std[i].score);
    ptoken = strtok(std, delimeter);
    while(strcmp(std, "quit") != NULL) {
        printf("학생이름\t과목이름\t점수 입력하세요 \n");
        scanf("%s %s %d", std[i].name, std[i].subject, &std[i].score);
        i++;
        count++;
        ptoken = strtok(NULL, delimeter);
    }

    //sum
    for(i = 0; i < count; i ++) {
        calsum(&std[i]);
    }
    
    //print
    for(i = 0; i < count; i ++) {
        printRec(std[i]);
    }
    printf("avg = %lf\n", avg);
    return 0;
}
void calsum(score *r)
{
    int i, sum = 0;
    sum += (*r).score;
}
void printRec(score r)
{   
    printf("%s\t%s\t%d\n", r.name, r.subject, r.score);
}