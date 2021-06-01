/*
practice 17 - 2

소요: 0.5H
*/

#include <stdio.h>

#define TRUE 1

void resetAccumulateSum();
int accumulateSum(int num);

static int numOfset = 0;   // 초기화, 정적전역변수로 하면 정의된 파일 내부에 사용할 수 있다.
static int numOfsum = 0;   // sum

int main(void)
{
    int value;

    while(TRUE) {
        scanf("%d", &value);

        if(value == 0) 
            break;
        if(value < 0) {
            printf("Total sum : %d\n", accumulateSum(0) );
            resetAccumulateSum();
        } else
            accumulateSum(value);
    }
    return 0;
}
void resetAccumulateSum()
{
    numOfsum = numOfset;    //numOfsum = 0으로 초기화
}
int accumulateSum(int num)
{   
    numOfsum += num;

    return numOfsum;
}

/*
1
2
3
-1
Total sum : 6
4
5
6
-1
Total sum : 15
0
--------------------------------------
5
6
4
-1
Total sum : 15
8
8
9
9
6
6
3
-1
Total sum : 49
0
*/