/*
practice 17 -1
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
    int numOfsum;
    numOfsum += num;

    return numOfsum;
}