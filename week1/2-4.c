/* 2.pdf - 문제 4 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, d;
    double x, x1, x2;
    printf("2차 방정식의 계수 a b c를 입력하시오 : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a == 0) {
        x = -c / b;
    }
    //a가 0이 아니면 판별식 b*b - 4*a*c을 갖는다.
    else if (a != 0) {
        d = b*b - 4*a*c;
        if( d > 0) {
            x1 = (-b + sqrt(d)) / (2.0 * a);
            x2 = (-b - sqrt(d)) / (2.0 * a);
            printf("근은 %lf, %lf입니다.\n", x1, x2);
        }
        else if (d == 0) {  
            x1 = -b / (2.0 * a);
            printf("근은 중근 %lf입니다.\n", x1);
        }
        else {
            x1 = -b / (2.0 * a);
            x2 = sqrt(fabs(d)) / (2.0 * a);

            printf("허근 : %lf + %lfi와 %lf - %lfi입니다.\n", x1, x2, x1, x2);
        }
    }

    return 0;
}
/*
2차 방정식의 계수 a b c를 입력하시오 : 3 -2 -1
근은 1.000000, -0.333333입니다.

2차 방정식의 계수 a b c를 입력하시오 : 1 2 1
근은 중근 -1.000000입니다.

2차 방정식의 계수 a b c를 입력하시오 : 1 1 1
허근 : -0.500000 + 0.866025i와 -0.500000 - 0.866025i입니다.
*/