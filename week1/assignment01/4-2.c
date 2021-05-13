/* 4.pdf - 문제 2 */
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void) 
{
    int num;

    
    while(TRUE) {
        printf("1. 파일\n");
        printf("2. 편집\n");
        printf("3. 보기\n");
        printf("하나를 선택하시오.\n");
        scanf("%d", &num);
        if(num == 1 || num == 2 || num == 3) 
            break;
    } 
    printf("선택된 메뉴는 %d\n", num);

    return 0;
}

/*
1. 파일
2. 편집
3. 보기
하나를 선택하시오.
-1
1. 파일
2. 편집
3. 보기
하나를 선택하시오.
4
1. 파일
2. 편집
3. 보기
하나를 선택하시오.
2
선택된 메뉴는 2
*/