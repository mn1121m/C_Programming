/*
프로그래밍기초 실습 (Chapter 16. 동적 메모리와 전처리) 
Practice 16 - 1

소요 : 0.5H
*/

#include <stdio.h>

#define print(x, y) (x)*(y)
int main(void)
{
    int a = 7, b = 2;

    printf("a와 b의 곱은 %d입니다.\n", print(a,b));
    return 0;
}