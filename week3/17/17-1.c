/*
practice 17 -1

소요: 0.5H
*/

#include <stdio.h>

#define TRUE 1

int accumulateSum(int num);
int main(void)
{
    int value, sum;

    while(TRUE) {
        scanf("%d", &value);
        if(value < 0 ) 
            break;
        sum = accumulateSum(value);
        printf("value : %d, sum ; %d\n", value, sum);
    }
    printf("Total sum : %d\n", accumulateSum(0));

    return 0;
}
int accumulateSum(int num)
{
    static int numOfsum;    /* static 선언하면 지역변수와 다르게 프로그램 종료시 없어지므로, 종료전까지 값이 계속 유지됩니다. */
    numOfsum += num;

    return numOfsum;
}
/*
9
value : 9, sum ; 9
5
value : 5, sum ; 14
6
value : 6, sum ; 20
8
value : 8, sum ; 28
7
value : 7, sum ; 35
-1
Total sum : 35
*/

/*
10
value : 10, sum ; 10
15
value : 15, sum ; 25
5
value : 5, sum ; 30
45
value : 45, sum ; 75
7
value : 7, sum ; 82
8
value : 8, sum ; 90
10
value : 10, sum ; 100
-1
Total sum : 100
*/