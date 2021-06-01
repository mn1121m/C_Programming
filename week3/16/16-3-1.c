//소수점 있는 10진수 -> 2진수로 출력
#include <stdio.h>

#define TRUE 1

int main(void)
{
    double num;
    scanf("%lf", &num);

    while(num) {
        num = num * 2;
        printf("%d", (int)num);

        if(num >= 1) {
            num = num -1;
        }
    }
    return 0;
}