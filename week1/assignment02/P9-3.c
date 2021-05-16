/* Pratice 09 - [문제]
3. 다음 그림과 같은 자료구조를 생성하도록 배열과 배열 포인터를 선언하고 배열의 원소를 출력하 는 프로그램을 작성하시오. 
배열 이름이 ary, 배열 포인터가 p일 때, ary와 p를 사용한 여러 가지 주소 표현과 역참조를 테스트하시오.
*/
#include <stdio.h>

int main(void)
{
    int arr[] = {8, 2, 8}, i;

    printf("ary을 이용한 출력: \n");
    for(i = 0; i < 3; i ++ ) {
        printf("%d\t",arr[i]);
    }
    printf("\n\n");

    int *p = &arr;
    printf("p를 이용한 출력: \n");
    for(i = 0; i < 3; i ++ ) {
        printf("%d\t",*(p + i));
    }
    return 0;
}
/* 출력결과
--------------------------
ary을 이용한 출력: 
8       2       8

p를 이용한 출력: 
8       2       8       % 
--------------------------
*/