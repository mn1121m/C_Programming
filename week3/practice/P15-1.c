/*
프로그래밍기초 실습 (Chapter 15. 파일 처리) 
Practice 15 - 1(1문제, 10점)

다시()
소요: 2H 이상
cf) fwrite(const void *ptr, size_t size, size_t n, FILE *fp);
    : ptr이 가리키는 메모리에서 size만큼 n개를 파일 fp에 쓰는(저장하는) 함수
    
    fread(void *dstbuf, size_t size, size_t n, FILE *fp);
    : 파일 fp에서 elmtsize의 n개만큼 메모리 dstbuf에 읽어오는 함수 

- 질문 - 
+ void searchScore(), void appendScore(FILE *fp, int cnt) 구현과정에 대해서 어떻게 코드를 짜야할지 모르겠습니다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_SIZE 128
#define MAX_LINE_SIZE 128

typedef struct _personscore {
    int number;
    char name[MAX_NAME_SIZE];
    int mid;
    int final;
    int quiz;
} pscore;

void printhead();
void appendScore(FILE *fp, int cnt)
void searchScore();
int printScore(FILE *fp);

int main(void)
{
    char fname[] = "score.bin";
    FILE *fp;
    int menu = 0;

    if(fopen(fname, "ab+") == NULL) {   //ab+ : 이진파일의 추가(append)모드로 파일을 연다, 필요하면 읽기모드로 전환가능('+'기능)
        printf("don't open the file.\n");
        exit(EXIT_FAILURE);
    }

    printf("학생 성적 관리 프로그램(음수: 종료) 1: 추가 2: 검색 3: 출력\n");
    printf("메뉴를 입력하세요 >> ");
    scanf("%d", &menu);

    switch(menu) {
        case 1: appendScore(fp); 
            break;
        case 2: searchScore(fp);
            break;
        case 3: printScore(fp);
            break;
        default: printf("다시 선택하시오.\n");
            break;
    }
    printhead();
    return 0;
}
void printhead()
{
    printf("s\n", "  ------------------------------------------------");
    printf("%8s%15s%10s%8s%8s\n", "번호", "이름", "중간", "기말", "퀴즈");
    printf("s\n", "  ------------------------------------------------");
}
void appendScore(FILE *fp, int cnt)
{
    pscore score = {0, };
    char line[MAX_LINE_SIZE];

    printf("추가할 이름과 성적(중간, 기말, 퀴즈)를 입력하세요 .\n\n");
    fgets(line, MAX_LINE_SIZE, stdin);

    //!feof() : 파일이 끝날때까지 while문을 돌린다.
    while(!feof(stdin)) {
        scanf(" %s %d %d %d", score.name, &score.mid, &score.final, &score.quiz);
        score.number = ++cnt;
        fwrite(&score, sizeof(pscore), 1, fp);
        fgets(line, MAX_LINE_SIZE, stdin);
    }
}
void searchScore();
int printScore(FILE *fp)
{
    //파일의 맨앞으로 이동
    rewind(fp);
    pscore score;
    //파일 fp에 하나도 자료가 없으면 변수 readcnt = 0 
    int readcnt = fread(&score, sizeof(pscore), 1, fp);
    if(readcnt == 0) {
        printf("현재는 성적 정보가 하나도 없습니다. >> \n");
        return 0;
    }
    //제목 출력
    printhead();
    while(!feof(fp)) {
        //표준출력에 쓰기
        fprintf(stdout, "%6d%18s%8d%8d%8d\n", score.number, score.name, score.mid, score.final, score.quiz);
        fread(&score, sizeof(pscore), 1, fp);
    }
    fprintf(stdout, "%s\n", "-------------------------------------------");

    return 1;
}