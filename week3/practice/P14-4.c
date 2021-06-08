/*
프로그래밍기초 실습 (Chapter 14. 함수와 포인터 활용) 
Practice 14 - 4 다시()

[프로그램 설명]
- 가변인자를 처리하는 함수 vafunc()의 다음 함수원형에서 첫 인자는 처리유형으로 
    문자 d이 면 int가 가변인자의 자료형이며, 
    첫 인자는 가변인자의 개수를 지정하며, 가변인자의 평균 을 반환하는 함수

- 질문 - 
+ typedef 없이 구현할때, double matA[ROWS][COLS] 로 구현한다면,
void multiply(double **r, double **A, double **B) <-- 이렇게 하는게 아닌가요 ?
typedef 없이 구현했을때 다음과 같은 에러가 발생해서 그렇습니다.

P14-4.c:25:14: warning: incompatible pointer types passing 'double [2][2]' to parameter of
      type 'double **' [-Wincompatible-pointer-types]
    multiply(result, matA, matB);
             ^~~~~~
P14-4.c:13:24: note: passing argument to parameter 'r' here
void multiply(double **r, double **A, double **B);
                       ^
P14-4.c:25:22: warning: incompatible pointer types passing 'double [2][3]' to parameter of
      type 'double **' [-Wincompatible-pointer-types]
    multiply(result, matA, matB);
                     ^~~~
*/

#include <stdio.h>

#define ROWS 2
#define COLS 3

typedef double scalar;
typedef scalar matrix1[ROWS][COLS];
typedef scalar matrix2[COLS][ROWS];
typedef scalar result[ROWS][ROWS];

void multiply(result r, matrix1 a, matrix2 b);
void display(result r);

int main(void)
{
    matrix1 a = {{4.2, 4.3, 3.8}, {3.7, 1.5, 0.7}};
    matrix2 b = {{5.2, 2.1}, {3.2, 1.4}, {1.5, 3.6}};
    result r = {0, };

    multiply(r, a, b);
    display(r);
    return 0;
}
void multiply(result r, matrix1 a, matrix2 b)
{
    int i, j, k;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 3; k++) 
                r[i][j] += a[i][k] * b[k][j];
        }
    }
}
void display(result r)
{
    int i, j;
    
    printf("Result = \n");
    for(i = 0; i < ROWS; i++) {
        for(j = 0 ; j < ROWS; j++) {
            printf("%.2lf\t", r[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return;
}
/*
Result = 
41.30   28.52
25.09   12.39

*/