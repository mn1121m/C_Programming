/* Practice09 - 실습문제 2 
2.정수 배열의 합을 계산하는 함수 int sumArrayOne(int arry[], int size)와 최소값을 찾는 함수 int findMinOne(int arry[], int size)를 구현하고
이를 이용하여, n x n의 2차원 배열을 입력받아, 합과 최소값을 구하는 프로그램을 작성해보자. (사용자는 2차원 배열의 크기 n을 입력한 후, n x n 배열을 입력한다.)
*/ 
#include <stdio.h>

#define MAX_ARY 100
int sumArrayOne(int ary[], int size);
int findMinOme(int ary[], int size);
int main(void)
{
    int n, i, j, ary[MAX_ARY], sum, min;

    printf("input n * n 배열크기입력: ");
    scanf("%d", &n);

    for(i = 0; i < n*n; i++) {
        scanf("%d", &ary[i]);
    }

    sum = sumArrayOne(ary, n);
    min = findMinOme(ary, n);
    printf("sum = %d\tmin = %d\n", sum, min);

    return 0;
}
int sumArrayOne(int ary[], int size)
{
    int sum = 0, i, j;

    for(i = 0; i < size*size; i++) {
        sum += ary[i];
    }
    return sum;
}
int findMinOme(int ary[], int size)
{
    int min = ary[0], i;

    for(i = 0; i < size*size; i++) {
        if(min > ary[i]){
            min = ary[i];
        }
    }
    return min;
}
/*
출력결과
input n * n 배열크기입력: 3
1 2 3
4 5 6
7 8 9
sum = 45        min = 1

input n * n 배열크기입력: 4
5 6 2 9
6 3 7 7
8 5 4 3
4 5 7 5
sum = 86        min = 2
*/
