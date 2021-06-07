/*
pratice 22 - 1
1. 다음 지시사항에 따라 동적배열을 사용해서 데이터 입력을 받고 평균을 계산하여 그 결과를 출력하는 프로그램을 작성하시오. (2점)

∙사용자로부터 배열의 크기 n과 난수 seed값 s를 입력 받아 n 크기의 1차원 동적배열을 생성한다. 
∙난수 seed 값을 s로 설정하고 난수(0~9사이 값) n개를 발생시켜 배열에 저장한다. 
∙배열의 저장된 데이터들에 대한 평균을 계산한다. 
∙배열의 원소 및 평균을 출력한다. 평균은 소수 첫 번째 자리까지 출력한다. 
∙동적메모리 할당을 해제한다. 

소요 : 30M
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_ARY_SIZE 128

#define MALLOC(p, s) \
if(!(p = malloc(s))) { \
fprintf(stderr, "Insufficient memory\n"); \
exit(EXIT_FAILURE); \
}

int *createAry(int size);
void printAry(int *ary, int size, int sum);

int main(void)
{   
    // n: 배열의크기    s: 난수 seed값
    int n, s, random = 0, i, sum =0;
    int *ary = NULL;

    scanf("%d %d", &n, &s);

    ary = createAry(n); // 동적할당
    srand(s);   // 난수 seed값을 s로 설정
    
    for(i = 0; i < n; i++) {
        random = rand() % 10;   // 0 ~ 9
        ary[i] = random;
        sum += ary[i];
    }
    printAry(ary, n, sum);
    free(ary);

    return 0;
}
int *createAry(int size)
{
    int *temp;

    MALLOC(temp, sizeof(*temp)*size);
    return temp;
}
void printAry(int *ary, int size, int sum)
{
    int i;
    double avg;
    
    for(i = 0; i < size; i ++) {
        printf("%d ", ary[i]);
    }
    avg = (double)sum / size;
    printf("\n");
    printf("%.1lf", avg);
}

/*
10 100
0 9 5 5 9 3 2 1 1 9 
4.4% 

5 200
0 8 3 3 8 
4.4%       
*/