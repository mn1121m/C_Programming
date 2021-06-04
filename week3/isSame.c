//5/28
//09-2-4.c 복습
#include <stdio.h>

int isSame(int A[3][3], int B[3][3]);

int main(void)
{
    int A[3][3], B[3][3];   // 선언부 type: int[3][3]

    int i, j;

    printf("3 * 3크기의 2차월 배열 A입력 : \n");
    for(i = 0; i < 3; i++ ){  // 행의 갯수
        for(j = 0; j < 3; j++ ) {
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("3 * 3크기의 2차월 배열 B입력 : \n");
    for(i = 0; i < 3; i++ ){  // 행의 갯수
        for(j = 0; j < 3; j++ ) {
            scanf("%d", &B[i][j]);
        }
    }
    if(isSame(A, B)) printf("Same\n");
    else printf("Not Same\n");

    return 0;
}
int isSame(int A[3][3], int B[3][3])
{
    // type : int [][] 
    int i , j;

    for( i = 0; i < 3; i ++ ) {
        for( j = 0 ; j < 3; j ++ ) {
            if(A[i][j] != B[i][j]) return 0;
        }
    }
    return 1;

}