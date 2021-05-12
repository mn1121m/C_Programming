/* Pratice 10 - [문제] => 다시()
4. 2개의 주사위를 던져서 합을 구하는 프로그램을 함수를 이용하여 작성하시오.
[프로그램 설명]
- rand() 함수를 이용한다.
- 함수에서는 두 주사위의 눈금이 각각 얼마이고, 합이 얼마인지 계산한다. Ÿ 두 주사위의 합이 9 이상이면 게이머가 이긴다.(누가 이겼는지 출력)
- 두 주사위의 합이 4 이하이면 컴퓨터가 이긴다.(누가 이겼는지 출력)
- 두 주사위의 합이 5에서 8 이상이면 비기고, 2개 주사위를 다시 던진다.
- 다시 던진 주사위의 합이 첫 번째 주사위의 합과 동일하면 게이머가 이긴다. 그렇지 않으면 동일할 때까지 주사위를 계속 던진다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
int rollDice(int *a, int *b);

int main(void)
{
    int d1, d2, d3, d4;
    int res1, res2;

    long seconds = (long)time(NULL);    // main함수내에 넣어야 비길때 초마다 값이 바뀐다.
    srand(seconds);

    while(TRUE) 
    {
        res1 = rollDice(&d1, &d2);
        printf("게이머 주사위 : %d + %d = %d\n", d1, d2, res1);
        if(res1 >= 9) {
            printf("게이머가 이겼습니다. \n");
            break;
        }
        else if(res1 <= 4) {
            printf("컴퓨터가 이겼습니다. \n");
            break;
        }
        else if(res1 >= 5 && res1 <= 8) 
        {
            printf("비겼습니다. \n");
            do 
            {
                res2 = rollDice(&d3, &d4);
                printf("게이머 주사위 : %d + %d = %d\n", d3, d4, res2);
                
            }while(res1 != res2);
            printf("게이머가 이겼습니다. \n");
            break;
        }
    }
    return 0;
}
int rollDice(int *a, int *b)
{
    *a = rand()%6 + 1;
    *b = rand()%6 + 1;

    return (*a + *b);
}
/*
출력결과
================================
게이머 주사위 : 1 + 4 = 5
비겼습니다. 
게이머 주사위 : 3 + 6 = 9
게이머 주사위 : 2 + 1 = 3
게이머 주사위 : 5 + 3 = 8
게이머 주사위 : 4 + 1 = 5
게이머가 이겼습니다. 
================================
게이머 주사위 : 4 + 5 = 9
게이머가 이겼습니다. 
================================
게이머 주사위 : 3 + 1 = 4
컴퓨터가 이겼습니다. 
================================
*/