/*  Pratice 08 - [문제]
1. 다음과 같이 int형 변수 value에 0x2F24263F를 정의한 후, 
char* 변수 pc를 선언하고, pc 변 수를 사용하여 value의 저장값을 각각 byte 단위로 인지하여 
각각의 문자를 출력하는 프로그램 을 작성하시오.
*/

#include <stdio.h>

int main(void)
{
    int value = 0x2F24263F, i;
    char* pc = (char*)&value, ch;
    
    for(i = 0; i < 4; i ++ ) {
        ch = *(pc + i);
        printf("%c\t", ch );
        printf("%u\t", pc + i );
        printf("%d\n", *(pc + i));
    }

    return 0;
}
/* 
출력결과
----------------------------------
?       3900053512      63
&       3900053513      38
$       3900053514      36
/       3900053515      47
*/