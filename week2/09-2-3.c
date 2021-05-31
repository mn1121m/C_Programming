/* Practice09 - 실습문제 3 
*중요* 
다시() - 안되면 그려보자!
동적할당을 이용
*/ 
#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COL 4

#define MALLOC(p ,s)  \
if(!(p = malloc(s))) { \
fprintf(stderr, "Insufficient memory. \n"); \
exit(EXIT_FAILURE); \
}

int **create2DAry(int row, int col);
int **transpose(int **mat, int row, int col);
void printMat(int **mat, int row, int col);
void freeMat(int **mat, int row);

int main(void)
{
    int i, j;
    int **matA = create2DAry(ROW, COL);
    int **matB;

    for(i = 0; i < ROW; i ++) {
        for(j = 0; j < COL; j ++) {
            scanf("%d", &matA[i][j]);
        }
    }
    printf("\n");

    matB = transpose(matA, ROW, COL);
    printMat(matB, COL, ROW);
    freeMat(matA, ROW);
    freeMat(matB, COL);

    return 0;
}
int **create2DAry(int row, int col)
{
    int **temp;
    int i;

    MALLOC(temp, sizeof(*temp) * row);
    for(i = 0; i < row; i ++) {
        MALLOC(temp[i], sizeof(*temp[i]) * col);
    }

    return temp;
}
int **transpose(int **mat, int row, int col)
{
    int **newMat = create2DAry(col, row);
    int i, j;

    for(i = 0; i < COL; i ++) {
        for(j = 0; j < ROW; j ++) {
            newMat[i][j] = mat[j][i];
        }
    }
    return newMat;
}
void printMat(int **mat, int row, int col)
{
    int i, j;
    for(i = 0; i < row; i ++) {
        for(j = 0; j < col; j ++) {
            printf("%2d ", mat[i][j]);
        }
        printf("\n"); //putchar('\n');
    }
    
}
void freeMat(int **mat, int row)
{
    int i;
    
    for(i = 0; i < row; i++) {
        free(mat[i]);
    }
    free(mat);
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

1 2 3 4
5 6 7 8

 1  5 
 2  6 
 3  7 
 4  8 
--------------------------------
*/