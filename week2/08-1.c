/* Practice08 - 실습문제 1 */
//질문
#include <stdio.h>

void printStar(int n); // 별을 찍는 함수
int main(void) 
{
    int n = 7;
    
    printStar(7);

    return 0;
}   

void printStar(int n)
{
    int i, j;

    for(i = 0; i < n/2; i ++) {
        for(j = 0; j < n/2 - i; j ++) { //i = 1, j = 2번돌아야한다. 
            printf("#")
        }
    }
}