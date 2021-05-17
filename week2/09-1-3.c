/* Practice06 - 실습문제 3 
2중(또는 3중) for문을 사용하여 9단까지의 구구단을 출력하는 프로그램을 작성하시오.(3점)
*/
#include <stdio.h>

int main(void)
{
    int i, j;

    for(i = 1; i <= 9; i = i+3) {
        for(j = 1; j <=9; j ++) {
            printf("%d * %d = %d\t%d * %d = %d\t %d * %d = %d\n"
            , i, j, i*j, i+1, j, (i+1)*j, i+2, j, (i+2)*j);
        }
        printf("\n");
    }
    return 0;
}