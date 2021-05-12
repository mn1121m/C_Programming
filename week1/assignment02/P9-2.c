/* pratice 09 - [문제]
2. 다음을 참고로 배열에서 모든 원소의 값을 모두 10씩 증가시키는 프로그램을 작성하시오.
*/
#include <stdio.h>

int main(void) 
{
    int data[] = {3, 21, 35, 57, 24, 82, 8};
    int i;

    printf("Before: \n");
    for(i = 0; i < 7; i++) {
        printf("%d\t", data[i]);
        data[i] = data[i] + 10;
    }
    printf("\n");
    printf("After: \n");
    for(i = 0; i < 7; i++) {
        printf("%d\t", data[i]);
    }

    return 0;
}
