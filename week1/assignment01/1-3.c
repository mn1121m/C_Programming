/* 1.pdf - 문제 3 */

#include <stdio.h>
#include <stdlib.h>

#define MYSTR1 "2012123456"
#define MYSTR2 "홍길동"

int main(void) 
{
    printf("학번 = %-15s\n", MYSTR1);
    printf("이름 = %15s\n", MYSTR2);
    return 0;
}