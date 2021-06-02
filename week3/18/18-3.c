/*
구조체
practice 18 - 3

소요: 0.5H  ~ 1H
- 질문 - 
+ "분자/분모" 형태로 어떻게 입력해야하는지 아이디어가 떠오르질 않네요.

*/
#include <stdio.h>

typedef struct {
    int numerator;      //분자
    int denormerator;   //분모
} fraction;
void compare2Size(fraction *r1, fraction *r2);

int main(void)
{
    fraction f1, f2;
    double result1, result2;

    printf("첫번째 분수의 ""분자/분모""를 입력하시오 \n");
    scanf("%d/%d", &f1.numerator, &f1.denormerator);

    printf("두번째 분수의 ""분자/분모""를 입력하시오 \n");
    scanf("%d/%d", &f2.numerator, &f2.denormerator); 

    compare2Size(&f1, &f2);
    return 0;
}
void compare2Size(fraction *r1, fraction *r2)
{
    r1 = (r1->numerator) / (r1->denormerator);
    r2 = (r2->numerator) / (r2->denormerator);

    printf("결과 : ");
    if(r1 > r2) 
        printf("-1\n");
    else if(r1 == r2)
        printf("0\n");
    else
        printf("1\n");
    return;
}