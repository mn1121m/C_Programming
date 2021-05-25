/* Practice08 - 실습문제 1 
사용자로부터 양의 정수 1개를 입력받고 다음과 같은 모양으로 출력하는 프로그램을 작성하시오. (2점)
*/
//다시(0)()
// 공백대신 '#' 으로 먼저 푼다음, 제출전에 공백으로 바꿀 것.
#include <stdio.h>

void printStar(int n); // 별을 찍는 함수
int main(void) 
{
    int n;
    printf("양의 정수 1개 입력: ");
    scanf("%d", &n);
    
    printStar(n);

    return 0;
}   

void printStar(int n)
{
    int i, j;
    int isEven = 0;

    //n = 짝수일경우, 가장큰수가 2번 출력되게 한다.
    if( n%2 == 0 ) {
        isEven = 1;
        n--;
    }
    for(i = 0; i < n/2; i++) {
        for(j = 0; j < n/2 - i; j++) { //i = 0, j = 3번 돌아가야한다.
            putchar(' ');
        }
        for(j = 0; j < i*2 + 1 ; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    for(j = 0; j < n; j++ ) 
        putchar('*');
    if(isEven) {
        putchar('\n');
        for(j = 0; j < n; j++ ) 
        putchar('*');
    }
    putchar('\n');
    for(i = 0; i < n/2; i++) {
        for(j = 0; j < i + 1; j++) { //i = 0, j = 3번 돌아가야한다.
            putchar(' ');
        }
        for(j = 0; j < (n - 2) - 2*i ; j++) {   // i = 0, j = (n-2) - 2*i , (n-2)일 경우 test를 해보자. ex) n = 1, n = 3, ...
            putchar('*');
        }
        putchar('\n');
    }
}