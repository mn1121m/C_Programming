/* 4.pdf - 문제 1 */
#include <stdio.h>

int main(void)
{
    int score, count = 0;
    double sum = 0;

    printf("성적을 마치려면 음수를 입력하시오.\n");
    printf("성적을 입력하시오\n");
    while(1) {
        scanf("%d", &score);
        if(score == -1 ) {
            break;
        }
        sum += score;
        count++;
    }
    if(count == 0) {
        printf("입력된 성적이 없습니다\n");
    }
    else {
        printf("%d명의 평균은 %.2lf입니다.\n", count, sum/count);
    }
    return 0;
}

/*
성적을 마치려면 음수를 입력하시오.
성적을 입력하시오
-1
입력된 성적이 없습니다
===========================================
성적을 마치려면 음수를 입력하시오.
성적을 입력하시오
10
10
10
-1
3명의 평균은 10.00입니다.
*/