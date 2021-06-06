/*
practice 19-4 다시()

- 질문 - 
+ 각 화폐 단위의 개수 데이터를 저장할 수 있는 구조체 정의 -> ?
+ 각 화폐 단위의 개수를 구하는 작업 => 함수로 구현 -> ?
*/

#include <stdio.h>

#define MAX_BUF_SIZE 100

typedef struct _money {
    int m50000;
    int m10000;
    int m1000;
    int m100;
    int m50;
} MONEY;

int countMoney(MONEY money);

int main(void)
{
    int coin[5] = {50000, 10000, 1000, 100, 50};
    int money, i, count[5];

    printf("원 단위의 금액을 나타내는 정수값 1개 입력 ");
    scanf("%d", &money);

    for(i = 0 ; i < 5; i ++) {
        count[i] = money / coin[i];
        money = money % coin[i];
        printf("%d원 : %d개\n", coin[i], count[i]);
    }
    return 0;
}