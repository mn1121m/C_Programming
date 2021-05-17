/* Practice09 - 실습문제 3 */ 
#include <stdio.h>

void printAry(int ary[4][4], int size);
int main(void)
{
    int ary[4][4], i, j, size = 4;

    printf("4*4 행렬원소 입력: \n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            scanf("%d", &ary[i][j]);
        }
    }
    printAry(ary, size);

    return 0;
}
void printAry(int ary[4][4], int size)
{
    int temp[4][4], i, j;
    printf("\n전치행렬 : \n");
    for(i = 0; i < size; i ++) {
        for(j = 0; j < size; j ++) {
           temp[i][j] = ary[j][i];
        }
    }
    //전치행렬 출력
    for(i = 0; i < size; i ++) {
        for(j = 0; j < size; j++) {
            printf("%d ", temp[i][j]);
        }
        printf("\n");
    }
}
/*
출력결과
--------------------------------
4*4 행렬원소 입력: 
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

전치행렬 : 
1 5 9 13 
2 6 10 14 
3 7 11 15 
4 8 12 16 
--------------------------------
4*4 행렬원소 입력: 
1 1 0 1
1 0 0 0
0 1 0 1
1 0 0 1

전치행렬 : 
1 1 0 1 
1 0 1 0 
0 0 0 0 
1 0 1 1 
--------------------------------
*/