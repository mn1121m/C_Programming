/*
프로그래밍기초 실습 (Chapter 14. 함수와 포인터 활용) 
Practice 14 - 5

- 질문 - 
+ 출력이 왜 1만 나오는지 모르겠습니다.
*/
#include <stdio.h>

void pascaltriangle(int (*p)[10], int size);
void triangleprint(int (*p)[10], int size);

int main(void)
{
    int pansal[10][10] = {0, };

    pascaltriangle(pansal, 10);
    triangleprint(pansal, 10);

    return 0;
}

void pascaltriangle(int (*p)[10], int size)
{
    int i, j;

    for(i = 0; i < size; i++) {
        for(j = 0; j <= i; j++) {
            if(j == 0 || j == 1)
                p[i][j] = 1;
            else
                p[i][j] = p[i-1][j-1] + p[i-1][j];
        }
    }
}
void triangleprint(int (*p)[10], int size)
{
    int i, j;
    
    for(i = 0; i < size; i++) {
        for(j = i; j <= i; j++) {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }
}
