/* Practice06 - 실습문제 1 
사용자로부터 임의의 개수의 성적을 받아서 평균을 계산한 후에 출력하는 프로그램을 작성하여 보자. 센티널로는 음수 값을 사용하자. 
즉 음수가 입력되면 성적 입력을 중단한다. (2점)
*/
#include <stdio.h>

int main(void)
{
    int score, count = 0;
    float sum = 0, avg;

    printf("input(음수 입력시 중단): ");
    while(score >= 0) {
        scanf("%d", &score);

        sum +=score;
        count++;
    }
    sum -= score;
    count--;

    avg = sum / count;
    printf("평균 : %.2f\n", avg);
    return 0;
}
/*
출력결과 
-------------------------------------------
input(음수 입력시 중단): 5 3 2 6 8 5 1 -1
평균 : 4.29

input(음수 입력시 중단): 5 4 3 -1
평균 : 4.00

input(음수 입력시 중단): 1 3 2 4 2 1 5 4 1 2 5 3 -1
평균 : 2.75
*/
