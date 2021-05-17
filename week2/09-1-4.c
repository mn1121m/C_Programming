/* Practice06 - 실습문제 4 
사용자는 섭씨를 입력한 후 화씨를 알아맞힌다. 사용자가 답을 제시하면 프로그램은 정답과 비교하여, 
입력한 예상값이 정답보다 크면 large, 작으면 small을 출력한다.
사용자가 정답을 맞추면 correct를 출력하고 몇 번만에 알아맞혔는지 시도 횟수를 출력한다
*/
#include <stdio.h>

#define TRUE 1

int main(void)
{
    int C, F,count = 0, answer;
    char temp;

    printf("섭씨 입력: ");
    scanf("%d", &C);

    F = 1.8 * C + 32;
    printf("F = %d\n", F);

    while(TRUE) {
        printf("입력 : ");
        scanf("%d", &answer);

        count ++;
        if(answer == F) 
            break;
        else {
            if(answer > F) 
                printf("large\n");
            else if(answer < F) 
                printf("small\n");
        }
    }
    printf("correct : %d\n", count);

    return 0;
}