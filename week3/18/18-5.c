/*
구조체
practice 18 - 5

소요: 0.5H
*/
#include <stdio.h>
#include <string.h>

#define MAX_NAME_SIZE 128
#define MAX_ARY_SIZE 128
#define TRUE 1

typedef struct {
    char fname[MAX_NAME_SIZE];
    int calories;
} Food;

int totalCalroies(Food *ary, int size);

int main(void)
{
    Food food[MAX_ARY_SIZE];
    int i = 0, count = 0;

    printf("음식명과 칼로리 정보 입력(quit 입력시 종료)\n");
    while(TRUE) {
        printf("1. 음식명 입력 : ");
        scanf("%s", food[i].fname);
        if(strcmp(food[i].fname, "quit") == '\0')
            break;
        getchar();
        
        printf("2. 칼로리 입력 : ");
        scanf("%d", &food[i].calories);
        getchar();
        i++;
        count++;
    }
    printf("출력값 : %d\n", totalCalroies(food, count));
    return 0;
}
int totalCalroies(Food *ary, int size)
{
    int i, sum = 0;

    for(i = 0; i < size; i ++) {
        sum += ary[i].calories;
    }
    return sum;
}
/*
음식명과 칼로리 정보 입력(quit 입력시 종료)
1. 음식명 입력 : hamburger
2. 칼로리 입력 : 900
1. 음식명 입력 : bulgogi
2. 칼로리 입력 : 500
1. 음식명 입력 : sushi
2. 칼로리 입력 : 700
1. 음식명 입력 : quit
출력값 : 2100   
*/