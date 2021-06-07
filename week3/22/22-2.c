/*
pratice 22 - 2
2. 동적배열을 사용해서 데이터를 입력받고 최소값을 찾아 출력하는 프로그램을 작성하시오. (2점)

프로그램 설명
∙사용자로부터 배열의 크기 n과 배열에 저장될 데이터 n개를 입력받아야 한다. 
∙배열에서 최소값을 찾아 그 결과를 출력한다.
∙데이터 입력 및 최소값 찾기는 다음과 같이 함수로 구현한다. 
    int* buildArray( );
    int findMin( int * );

소요 : 40M
*/
#include <stdio.h>
#include <stdlib.h>

#define MALLOC(p ,s) \
if(!(p = malloc(s))) { \
fprintf(stderr, "Insufficient memory.\n"); \
exit(EXIT_FAILURE); \
}

int *buildAry(int size);
int findMin(int * ary, int size);

int main(void)
{
    int *ary, i, n, minValue;

    //malloc
    scanf("%d", &n);
    ary = buildAry(n);

    //input
    for(i = 0; i < n; i ++) {
        scanf("%d", &ary[i]);
    }

    //search the minValue
    minValue = findMin(ary, n);
    //print
    printf("%d\n", minValue);
    //free
    free(ary);
    return 0;
}

int *buildAry(int size)
{
    int *temp;

    MALLOC(temp, sizeof(*temp)* size);
    return temp;
}

int findMin(int * ary, int size)
{
    int i, j, temp, minidx;

    for(i = 0; i < size; i ++) {
        minidx = i;
        for(j = i + 1; j < size; j++) 
            if(ary[j] < ary[minidx])
                minidx = j;
        temp = ary[minidx];
        ary[minidx] = ary[i];
        ary[i] = temp;   
    }
    
    return ary[0];
}
/*
10
-100 99 0 1 991 363 -123 45 8 51
-123

5 
16 2 -41 89 61
-41
*/