/*  Pratice 09 - [문제]
5. 다음 그림과 같은 자료구조를 생성하도록 배열과 배열 포인터를 선언하고
배열의 원소를 출력하 는 프로그램을 작성하시오. 배열 이름이 ary3, 배열 포인터가 p일 때, 
ary3과 p를 사용한 여러 가지 주소 표현과 역참조를 테스트하시오.
*/

#include <stdio.h>

#define ROW 2
#define COL 3
int main(void) 
{
    int ary3[2][2][3] = { { {1, 2, 3 } , {4, 5, 6} }, { {7, 8, 9}, {10, 11, 12} } };
    int i, j, k;
    int (*p)[2][3] = ary3;

    printf("ary3을 이용한 출력 : \n");
    for(i = 0; i < 2; i ++) {
        for( j = 0 ; j < 2; j ++) {
            for( k = 0 ; k < 3; k ++) {
                printf("%d\t", *(*(*(ary3 + i) + j) + k) );
                // printf("%d\t", *(*(ary3[i]+ j) + k) );
                // printf("%d\t", *(ary3[i][j]) + k );
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n\n");

    printf("p을 이용한 출력 : \n");
    for(i = 0 ; i < 2; i ++) {
        for( j = 0 ; j < ROW; j ++) {
            for(k = 0 ; k < COL; k ++) {
                printf("%d\t", *(*(*(p + i)+ j)+ k) );
            }
            printf("\n");
        }
        printf("\n");
    }
    

    return 0;
}