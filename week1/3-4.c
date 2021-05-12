/* 3.pdf - 문제 4 */
//다시풀기(ok)
#include <stdio.h>

int main(void) 
{
    int total_income, sumTax = 0;

    printf("연봉을 입력하세요 (천원단위 입력): ");
    scanf("%d", &total_income);

    if(total_income > 10000){
        printf("%d * 0.9 = %.f천원\n", 10000, (10000 * 0.09));
        sumTax += (10000 * 0.09);
        printf("sumTax = %d\n", sumTax);

        if(total_income > 40000){
            printf("%d * 0.18 = %.f천원\n", 30000, (30000 * 0.18));
            sumTax += (30000 * 0.18);
            printf("sumTax = %d\n", sumTax);

            if(total_income > 80000){
                printf("%d * 0.27 = %.f천원\n", 40000, (40000 * 0.27));
                sumTax += (40000 * 0.27);
                printf("sumTax = %d\n", sumTax);

                printf("%d * 0.36 = %.f천원\n", total_income - 80000, (total_income - 80000) * 0.36);
                sumTax += (total_income - 80000) *0.36;
                printf("sumTax = %d\n", sumTax);
            }
            else {
                printf("%d * 0.27 = %.f천원\n",total_income - 40000, (total_income - 40000) * 0.27);
                sumTax += (total_income - 40000) * 0.27;
                printf("sumTax = %d\n", sumTax);
            }
        }
        else {
            printf("%d * 0.18 = %.f천원\n", total_income - 10000, (total_income - 10000) * 0.18);
            sumTax += (total_income - 10000) * 0.18;
            printf("sumTax = %d\n", sumTax);
        }
    }
    else {
        printf("%d * 0.18 = %.f천원\n", total_income, total_income * 0.09);
        sumTax += total_income * 0.09;
        printf("sumTax = %d\n", sumTax);
    }
    printf("합계 = %d천원\n", sumTax);

    return 0;
}

/*
연봉을 입력하세요 (천원단위 입력): 90000
10000 * 0.9 = 900천원
30000 * 0.18 = 5400천원
40000 * 0.27 = 10800천원
10000 * 0.36 = 3600천원
합계 = 20700천원
*/