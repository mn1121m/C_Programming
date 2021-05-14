/* Pratice 09 - [문제]
4. 다음 그림과 같은 자료구조를 생성하도록 배열과 배열 포인터를 선언하고 
배열의 원소를 출력하 는 프로그램을 작성하시오. 배열 이름이 ary2, 배열 포인터가 p일 때,
ary2와 p를 사용한 여러 가지 주소 표현과 역참조를 테스트하시오
*/

#include <stdio.h>

int main(void) 
{
    int ary2[2][3] = { {4,2,3}, {5,2,3} }, i, j;
    int (*p)[3] = &ary2;

    printf("ary2를 이용한 출력: \n");
    for(i = 0; i < 2; i ++ ) {
        for( j = 0; j < 3; j ++) {
            printf("%d\t", ary2[i][j]);
            // printf("%d\t", *(ary2[i]+ j));
            // printf("%d\t", *(*(ary2 + i) + j));
        }
        printf("\n");
    }
    printf("\n\n");

    
    printf("p를 이용한 출력 : \n");
    for(i = 0 ; i < 2; i ++ ) {
        for( j = 0; j < 3; j ++ ) {
            printf("%d\t", p[i][j]);
            // printf("%d\t", *(p[i] + j));
            // printf("%d\t", *(*(p + i) + j));
        }
        printf("\n");
    }

    return 0;
}