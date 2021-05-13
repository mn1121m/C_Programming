/* 1.pdf - 문제 5 */

#include <stdio.h>

int main(void)
{
    int money;
    printf("거스름돈을 입력하세요 >> ");
    scanf("%d", &money);

    printf("거스름돈 28777은 ");
    printf("만원 %d장", money / 10000);
    money = money % 10000;
    printf("오천원 %d장 ", money / 5000);
    money = money % 5000;
    printf("천원 %d장 ", money / 1000);
    money = money % 1000;
    printf("오백원 %d개 ", money / 500);
    money = money % 500;
    printf("백원 %d개 ", money / 100);
    money = money % 100;
    printf("오십원 %d개 ", money / 50);
    money = money % 50;
    printf("십원 %d개 ", money / 10);
    money = money % 10;
    printf("오원 %d개 ", money / 5);
    money = money % 5;
    printf("일원 %d개입니다.\n", money / 1);
    money = money % 1;
    
    /*
    결괴:
    거스름돈을 입력하세요 >> 28777
    거스름돈 28777은 만원 2장오천원 1장 천원 3장 오백원 1개 백원 2개 오십원 1개 십원 2개 오원 1개 일원 2개입니다.
    */

    return 0;
}