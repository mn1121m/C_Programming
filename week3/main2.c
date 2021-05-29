//5/28
//main.c -> 이중포인터, 동적할당(malloc)으로 구현. 09-2-4
#include <stdio.h>
#include <stdlib.h>

int **createMatrix(int row, int col);
int isSame(int **A, int **B, int row, int col); //row, col 알수있게 같이 선언해줘야한다.
void freeMatrix(int **mat, int row);    // (int *) free해야하므로 row가 필요하다.

int main(void)
{
    int **A, **B;
    int i, j;

    A = createMatrix(3, 3);
    B = createMatrix(3, 3);

    printf("3 * 3크기의 2차월 배열 A입력 : \n");
    for(i = 0; i < 3 ; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    
    printf("3 * 3크기의 2차월 배열 B입력 : \n");
    for(i = 0; i < 3 ; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n");

    if (isSame(A, B, 3, 3)) {
        printf("Same\n");
    }else 
        printf("Not same\n");
    
    // (중요) free 횟수 = allocation 횟수
    freeMatrix(A, 3);
    freeMatrix(B, 3);

    return 0;
}

int **createMatrix(int row, int col)
{
    int **temp;
    int i;

    temp = (int **)malloc(sizeof(*temp) * row);
    for(i = 0; i < row; i++) {
        temp[i] = (int *)malloc(sizeof(*temp) * col);
    }
    return temp;
}

int isSame(int **A, int **B, int row, int col)
{
    int i, j;
    for(i = 0; i < row; i++ ){
        for(j = 0; j < col; j++) {
            if(A[i][j] != B[i][j]) return 0;
        }
    }
    return 1;

}
void freeMatrix(int **mat, int row)
{
    int i;
    
    // (int *) 먼저 free 한 후에, (int **) free한다.
    for( i = 0 ; i < row; i ++) 
        free(mat[i]);
    free(mat);
}