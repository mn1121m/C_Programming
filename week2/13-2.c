/* Practice13 - 실습문제 2 */

#include <stdio.h>
void zeroBelowAvg(int matrix[][100], int n, double avgs[100]);
int main(void)
{
    int n, matrix[100][100], i, j;
    double avgs[100];

    printf("Input(n * n 행렬크기 입력): ");
    scanf("%d", &n);

    printf("%d * %d 행렬의 각 원소 입력: \n", n, n);
    for(i = 0; i < n; i++) {
        for(j =0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    zeroBelowAvg(matrix, n, avgs);
    printf("\nOutput : \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("%.1lf", avgs[i]);
        printf("\n");
    }
    return 0;
}
void zeroBelowAvg(int matrix[][100], int n, double avgs[100])
{
    int i, j;
    double sum = 0;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        avgs[i] = sum / n;
        sum = 0;
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] < avgs[i])
            {
                matrix[i][j] = 0;
            }
        }
    }

}
/*
출력결과
-----------------------------
Input(n * n 행렬크기 입력): 4
4 * 4 행렬의 각 원소 입력: 
5 3 2 9
6 3 7 4
1 8 7 2
5 2 1 1

Output : 
5 0 0 9 4.8
6 0 7 0 5.0
0 8 7 0 4.5
5 0 0 0 2.2
-----------------------------
*/