/* Pratice 10 - [문제]
1. 사용자로부터 3개의 정수를 입력받고, 
3개 정수 중에서 최댓값, 중간 값, 최솟값을 출력하는 프 로그램을 작성하시오

cf) do while문은 사용안하는게 좋다.
+ 조건연산자로 표현가능하다. (코드의 길이 단순화) 
하지만 if문으로 푸는게 낫다.

*/

#include <stdio.h>

int findMax(int a, int b, int c);
int findMiddle(int a, int b, int c);
int findMin(int a, int b, int c);

int main(void)
{   
    int a, b, c;
    char temp;

    printf("정수 3개를 입력하세요(종료: 0 0 0): ");
    scanf("%d %d %d", &a, &b, &c);

    while(a != 0 || b != 0 || c != 0) {
        int max = findMax(a, b, c);
        int middle = findMiddle(a, b, c);
        int min = findMin(a, b, c);
        printf("최댓값 = %d, 중간값 = %d, 최솟값 = %d\n",max, middle, min);

        printf("정수 3개를 입력하세요(종료: 0 0 0): ");
        scanf("%d %d %d", &a, &b, &c);
    }
    printf("프로그램을 종료합니다. \n");
    return 0;
}
int findMax(int a, int b, int c)
{
    int x = 0;
    if(a > b)
        x = a;
    else 
        x = b;
    if(x > c)
        return x;
    else    
        return c;
    /*
    a > b 
    a > c return a; / return c

    b >= a
    c > b return c; / return b
    
   
    return (a > b?
        (a > c? a: c):
        (c > b? c: b) 
        );
    */
} 

int findMiddle(int a, int b, int c)
{
    if(a >= b) {
        if(b >= c)
            return b;
        else 
            if(a <= c)
                return a;
            else
                return c;
    }else { 
        if(a >= c)  
            return a;
        else        
            if(b >= c)  
                return c;
            else        
                return b;
    }
}
int findMin(int a, int b, int c)
{
    int x = 0;

    if( a < b)
        x = a;
    else   
        x = b;
    if( x < c)  
        return x;
    else
        return c;
}       
/*
출력결과
=========================================
정수 3개를 입력하세요(종료: 0 0 0): 30 0 20
최댓값 = 30, 중간값 = 20, 최솟값 = 0
정수 3개를 입력하세요(종료: 0 0 0): 1 100 1
최댓값 = 100, 중간값 = 1, 최솟값 = 1
정수 3개를 입력하세요(종료: 0 0 0): -1 0 99
최댓값 = 99, 중간값 = 0, 최솟값 = -1
정수 3개를 입력하세요(종료: 0 0 0): 0 0 0
최댓값 = 0, 중간값 = 0, 최솟값 = 0
프로그램을 종료합니다. 
=========================================
*/