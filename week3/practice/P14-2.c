/*
프로그래밍기초 실습 (Chapter 14. 함수와 포인터 활용) 
Practice 14 - 2

[프로그램 설명]
- 함수 arraycopy(int *from, int *to, int size)는 배열 from의 처음 원소부터 size 개수까지 원소 값을 배열 to의 동일한 순서의 원소에 복사하는 함수
- 함수 arrayprint(int *p, int size)는 배열 p의 처음 원소부터 size 개수까지 원소 값을 출력 하는 함수
*/

#include <stdio.h>

void arraycopy(int *from, int *to, int size);
void arrayprint(int *p, int size);
int main(void)
{
    int to[] = {13, 34, 28, 56, 73, 45}; 
    int from[] = {3, 5, 1, 6, 7}; 
    arraycopy(from, to, 5); 
    arrayprint(from, 5);
    arrayprint(to, 6);

    return 0;
}
void arraycopy(int *from, int *to, int size)
{
    int i;
    
    for(i = 0; i < size; i++) {
        to[i] = from[i];
    }
}
void arrayprint(int *p, int size)
{
    int i;
    
    for(i = 0; i < size; i ++) {
        printf("%d ", p[i]);
    }
    printf("\n");
}