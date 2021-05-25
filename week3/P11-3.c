/*
[문제]
3. 다음과 같은 배열 선언에서 각각의 문장 결과를 기술하시오.
질문 - 오류뜨는데, 왜 뜨는지 잘 모르겠습니다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[60] = "project program java";
    
    printf("%d\n", _strupr(str));    //대문자로 출력
    printf("%s\n", _strlwr(str));    //소문자로 출력
    printf("%d\n", strlen("project"));  //7
    printf("%d\n", strcmp(str,"project program java")); //0 
    printf("%s\n", strpbrk("project program java", "av"));  //av
    printf("%s\n", strstr("project program java", "je"));   //je
    printf("%s\n", strchr("project program java",'g')); //g
    printf("%s\n", strcat(str," C++")); //project program java C++
    printf("%s\n", strcpy(str, "project program")); //project program java
    printf("%s\n", memcpy(str, "python", strlen("python")+1));  //python


    return 0;
}
