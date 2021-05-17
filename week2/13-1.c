/* Practice13 - 실습문제 1 */

#include <stdio.h>

int findMin(int matrix[][100], int n);
int findMax(int matrix[][100], int n);
int main(void)
{
    int n, matrix[100][100], i, j, min, max;
    
    printf("배열크기 입력: ");
    scanf("%d", &n);
    printf("%d * %d 행렬 입력: \n", n, n);
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    min = findMin(matrix, n);
    max = findMax(matrix, n);
    printf("max = %d, min = %d\n", max, min);

    return 0;
}
int findMin(int matrix[][100], int n)
{
    int i, j, min;
    min = matrix[0][0];
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(min > matrix[i][j])
                min = matrix[i][j];
        }
    }
    return min;
}
int findMax(int matrix[][100], int n)
{
    int i, j , max;
    max = matrix[0][0];
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(max < matrix[i][j])
                max = matrix[i][j];
        }
    }
    return max;
}
/*
출력결과
------------------------
배열크기 입력: 3
3 * 3 행렬 입력: 
13 10 1 
18 5 16
7 19 12
max = 19, min = 1
------------------------
배열크기 입력: 4
4 * 4 행렬 입력: 
11 21 41 32
36 29 13 36
85 74 53 34
63 66 43 57
max = 85, min = 11
------------------------
*/
