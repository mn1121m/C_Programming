/* Practice06 - 실습문제 2 
첫째날은 1원, 둘째 날은 2원, 셋째 날은 4원과 같이, 매일 임금이 이전 날의 2배가 된다고 할 때, 입력받은 일수동안 매일 받는 임금과 받은 임금의 총합을 계산하는 프로그램을 작성하라. 만약 일수로 0보다 작은 값이 입력되면 wrong을 출력하며 다시 입력받아야 한다. (2점)
*/
#include <stdio.h>
#define TRUE 1

int main(void)
{
    int num, i;

    while(TRUE) {
        printf("입력 : ");
        scanf("%d", &num);
        if(num < 0) 
            printf("wrong\n");
        else {
            printf("1\n");
            for(i = 1; i <= num; i++) {
                printf("%d\n", i * 2);
            }
            break;
        }
    }
    return 0;
}