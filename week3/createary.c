#include <stdio.h>
#include <stdlib.h>

#define MALLOC(p, s) \
if(!(p = malloc(s))) { \
fprintf(stderr, "Insufficient memory. \n"); \
exit(EXIT_FAILURE); \
}

int *createAry(int size);
int **create2DAry(int row, int col);
void freeMatrix(int **mat, int row);

int main(void)
{
    int **mat = create2DAry(5, 3);
    int *vec = createAry(3);
    int i, j;

    //input
    printf("5 * 3크기의 2차월 배열 mat입력 : \n");
    for(i = 0; i < 5 ; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    //output
    printf("5 * 3크기의 2차월 배열 mat출력 \n");
    for(i = 0; i < 5 ; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    //free
    freeMatrix(mat, 5);
    return 0;
}

int *createAry(int size)
{
    int *temp;

    MALLOC(temp, sizeof(*temp)*size);
    return temp;
}
int **create2DAry(int row, int col)
{
    int **temp;
    int i;

    MALLOC(temp, sizeof(*temp)*row);
    for(i = 0; i < row; i ++) {
        MALLOC(temp[i], sizeof(*(temp[i])*col));
    }
    return temp;
}
void freeMatrix(int **mat, int row)
{
    int i;
    
    for(i = 0; i < row; i ++) {
        free(mat[i]);
    }
    free(mat);
}