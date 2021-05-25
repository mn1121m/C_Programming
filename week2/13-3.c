/* Practice13 - 실습문제 3 */

// int * sizeof 4 => 동적 배열
// int [3] sizeof 12 => 정적 배열 
#include <stdio.h>

void transposingMatrix(int matrix[][100], int n);
void printMatrix(int matrix[][100], int n);

int main(void)
{
    int n, matrix[100][100], i, j;
    printf("n * n 행렬 크기 입력: ");
    scanf("%d", &n);

    printf("%d * %d 크기 원소 입력: \n", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    transposingMatrix(matrix, n);
    //printMatrix(matrix, n);

    return 0;
}

void transposingMatrix(int matrix[][100], int n)
{
    int temp[n][n], i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            temp[j][i] = matrix[i][j];
        }
    }
    printf("\nOutput\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", temp[i][j]);
        }
        printf("\n");
    }

}

void printMatrix(int matrix[][100], int n)
{
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
/*
출력결과
---------------------------
n * n 행렬 크기 입력: 3
3 * 3 크기 원소 입력: 
3 2 1
6 5 4
9 8 7

Output
3 6 9 
2 5 8 
1 4 7 
---------------------------
n * n 행렬 크기 입력: 4
4 * 4 크기 원소 입력: 
5 3 2 9
6 3 7 4
1 8 7 2
5 2 1 1

Output
5 6 1 5 
3 3 8 2 
2 7 7 1 
9 4 2 1 
---------------------------
*/