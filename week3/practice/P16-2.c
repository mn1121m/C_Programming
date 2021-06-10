/*
프로그래밍기초 실습 (Chapter 16. 동적 메모리와 전처리) 
Practice 16 - 2

연결리스트 공부후 다시풀기()
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_SIZE 32

typedef struct _student {
    int number;
    char name[MAX_NAME_SIZE];
    double fir;
    double sec;
    double sum;
    struct _student *next;
} student;

int main(void)
{
    FILE *in, *out;
    int flag;
    student *head, *node, *new_node, *del_node;

    if((in = fopen("input.txt","r")) == NULL) {
        fprintf(stderr, "파일을 읽을 수 없습니다.\n");
        exit(EXIT_FAILURE);
    }
    if((out = fopen("output.txt","w")) == NULL) {
        fprintf(stderr, "파일을 쓸 수 없습니다.\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}