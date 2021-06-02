/*
practice 19 - 1 다시()
1. 사용자로부터 시작 시간과 종료 시간을 입력받아 경과 시간을 출력하는 프로그램을 작성하라. 
입출력 형식은 “hh:mm:ss” 와 같으며, 시는 0~24 사이, 분과 초는 0~60 사이의 값이다.

소요: 1H
- 질문 - 
+ "hh:mm:ss" -> 함수인자로 넘겨서 처리하는 과정을 모르겠습니다.
*/
#include <stdio.h>

#define MAX_ARY_SIZE 128

typedef struct {
    int hour;
    int min;
    int sec;
} TIME;

TIME elapsedTime( TIME start, TIME end );

int main(void)
{
    TIME time[MAX_ARY_SIZE];
    int i = 0, start, end;

    for(i = 0 ; i < 2; i ++) {
        printf("%d\n", i+1);
        scanf("%d:%d:%d", &time[i].hour, &time[i].min, &time[i].sec);
        getchar();
    }


    printf("출력값 : \n");

    return 0;
}