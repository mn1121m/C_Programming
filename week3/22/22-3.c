/*
pratice 22 - 3
3. 포인터 배열을 이용하여 2차원 배열을 만들어 데이터를 입력받고 최소값을 찾아 출력하는 프로그램을 작성하시오. (2점)

프로그램 설명
∙사용자로부터 배열의 크기 n을 입력받아, n개의 1차원 배열을 동적으로 만들어 각 포인터 배열 int *p[n]의 원소에 할당한다. 
    그리고 n x n 의 2차원 배열 정보를 입력받아 배열에서 최소값을 찾아 그 결과를 출력한다.
∙포인터배열 int *p[MAX]를 선언하고 n이 입력되면 포인터배열의 각 원소에 1차원 배열을 동적으로 생성하여 연결한다.  
∙int p[n][n] 2차원 배열로 생각하고 자료를 입력받아 그 중 최소값을 찾아 출력한다.

소요(Miniute) : 40M
*/
#include <stdio.h>
#include <stdlib.h>

#define MALLOC(p, s) \
if(!(p = malloc(s))) { \
fprintf(stderr, "Insufficient memory.\n"); \
exit(EXIT_FAILURE); \
}

#define MAX 128

int **create2DAry(int row, int col);
int selection_min(int **ary, int size);
void free2DAry(int **ary, int row);

int main(void)
{
    // 2차월 포인터 배열, 배열의 크기
    int **p, n, i, j;
    int min;

    scanf("%d", &n);
    p = create2DAry(n , n);

    for(i = 0; i < n; i ++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &p[i][j]);
        }
    }
    min = selection_min(p, n);
    printf("최소값 = %d\n", min);
    free2DAry(p, n);
    return 0;
}
int **create2DAry(int row, int col)
{
    int **temp, i;

    MALLOC(temp, sizeof(*temp) * row);
    for(i = 0; i < row; i ++) {
        MALLOC(temp[i], sizeof(*temp[i]) * col);
    }
    return temp;
}
int selection_min(int **ary, int size)
{
    int i, j, temp;
    int min = ary[0][0];

    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; j++) {
            if(ary[i][j] < min)
                min = ary[i][j];
        }
    }
    return min;
}
void free2DAry(int **ary, int row)
{
    int i;

    for(i = 0; i < row; i++) {
        free(ary[i]);
    }
    free(ary);
}
/*
3
10 30 5
20 16 9
9 19 22
최소값 = 5
*/