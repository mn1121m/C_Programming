/*
practice 17 - 4

소요시간 : 0.5H
- 질문 -
+ void findSum() 안에 scanf() 에서 배열이 곧 주소값인데, 왜 주소연산자를 쓰는지 건가요 ?

*/
#include <stdio.h>

#define MAX_ARY_SIZE 64

void findSum(int data[], int n, int *sum);

int main(void)
{
    int data[MAX_ARY_SIZE], num, sum = 0;
    
    scanf("%d", &num);

    findSum(data, num, &sum);
    printf("%d\n", sum);

    return 0;
}
void findSum(int data[], int n, int *sum)
{
    int i;

    for(i = 0; i < n; i ++) {
        scanf("%d", &data[i]);
        *sum += data[i];
    }
}
/*
5
1 2 3 4 5
15

7
5 8 4 2 6 3 1
29
*/

