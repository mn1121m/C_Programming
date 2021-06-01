/*
Practice15 - 1  다시(0)
1. 네 명의 학생들에 대하여 각 학생의 “이름”과 “국어”, “영어”, “수학”에 대한 성적을 한 줄로 차례로 입력받은 후, 
각 학생에 대하여 이름과 각 과목의 성적과 합을 화면에 보이시오. 단, 이름은 붙여서 입력되며, 모든 성적은 정수이다. (2점)

소요: 1.5H

*/

#include <stdio.h>

#define MAX_NAME_SIZE 128
#define MAX_REC_SIZE 16

#define TRUE 1
#define FALSE 0

typedef struct {
    char name[MAX_NAME_SIZE];
    int lang;
    int eng;
    int math;
    int sum;
} record;

void printRec(record r);
void calSum(record *r);

int main(void)
{
    record rec[MAX_REC_SIZE];
    int i = 0;

    for(i = 0; i < 4; i++ ) {
        scanf("%s %d %d %d", rec[i].name, &rec[i].lang, &rec[i].eng, &rec[i].math);
        calSum(&rec[i]);
    }
    for(i = 0; i < 4; i++ ) {
        printRec(rec[i]);
    }

    return 0;
}

void printRec(record r)
{
    printf("%s %d %d %d %d\n", r.name, r.lang, r.eng, r.math, r.sum);
}

void calSum(record *r)
{
    (*r).sum = (*r).lang + (*r).eng + (*r).math;
}
/*
ParkJiSung 30 20 50
LeeYungPyo 30 40 60
HongMyungBo 50 30 60
JunJin 90 100 20


ParkJiSung:   30   20   50  100   
LeeYungPyo:   30   40   60  130
HongMyungBo:   50   30   60  140
JunJin:     90  100   20  210
*/