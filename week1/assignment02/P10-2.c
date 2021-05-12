/* Pratice 10 - [문제]
2. 사칙연산(덧셈, 뺄셈, 곱셈, 나눗셈)이 가능한 계산기 프로그램을 함수를 사용해 작성하시오.
*/
#include <stdio.h>

double add(double n1,double n2);
double sub(double n1,double n2);
double mul(double n1,double n2);
double div(double n1,double n2);
void print(double n1, double n2, double result,int op);

int main(void)
{
    double a, b;
    int op;
    double result;
    while(1) 
    {
        printf("******************************\n");
        printf("*   1. 덧셈                  *\n");
        printf("*   2. 뺄셈                  *\n");
        printf("*   3. 곱셈                  *\n");
        printf("*   4. 나눗셈                *\n");
        printf("*   5. 종료                  *\n");
        printf("******************************\n");
        printf("메뉴를 선택하세요 : ");
        scanf("%d", &op);
        switch(op) {
        case 1: printf("두 수를 입력하세요 : ");
                scanf("%lf %lf", &a, &b);
                result = add(a, b);
                print(a, b, result, op);
                break;
        case 2: printf("두 수를 입력하세요 : ");
                scanf("%lf %lf", &a, &b);
                result = sub(a, b);
                print(a, b, result, op);
                break;
        case 3: printf("두 수를 입력하세요 : ");
                scanf("%lf %lf", &a, &b);
                result = mul(a, b);
                print(a, b, result, op);
                break;
        case 4: printf("두 수를 입력하세요 : ");
                scanf("%lf %lf", &a, &b);
                result = div(a, b);
                print(a, b, result, op);
                break;
        case 5: return 0;
        }
        printf("\n");
    }

    
}
double add(double n1,double n2)
{
    return (n1 + n2);
}
double sub(double n1,double n2)
{
    return (n1 - n2);
}
double mul(double n1,double n2)
{
    return (n1 * n2);
}
double div(double n1,double n2)
{
    return (n1 / n2);
}
void print(double n1, double n2, double result,int op)
{
    if(op == 1)
    {
        printf("%.2lf + %.2lf = %.2lf\n", n1, n2, result);
    }
    else if(op == 2)
    {
        printf("%.2lf - %.2lf = %.2lf\n", n1, n2, result);
    }
    else if(op == 3)
    {
        printf("%.2lf * %.2lf = %.2lf\n", n1, n2, result);
    }
    else if(op == 4)
    {
        printf("%.2lf / %.2lf = %.2lf\n", n1, n2, result);
    }
}

/*
출력결과
=========================================
******************************
*   1. 덧셈                  *
*   2. 뺄셈                  *
*   3. 곱셈                  *
*   4. 나눗셈                *
*   5. 종료                  *
******************************
메뉴를 선택하세요 : 4
두 수를 입력하세요 : 10 30
10.00 / 30.00 = 0.33

******************************
*   1. 덧셈                  *
*   2. 뺄셈                  *
*   3. 곱셈                  *
*   4. 나눗셈                *
*   5. 종료                  *
******************************
메뉴를 선택하세요 : 5
=========================================
*/