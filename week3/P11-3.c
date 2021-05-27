/*
[문제] 다시()
3. 다음과 같은 배열 선언에서 각각의 문장 결과를 기술하시오.

-질문 - 
+   1,2번 오류인데 어떻게 하면 오류를 해결할 수 있는지
+   5,6번 결과가 올바르게 되려면 어떻게 수정해야 하는지

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[60] = "project program java";
    
    // printf("%c\n", strupr(str));    //대문자로 출력     =>오류  Visual C++ 권장함수 
    // printf("%c\n", strlwr(str));    //소문자로 출력     =>오류  Visual C++ 권장함수 
    printf("3. %lu\n", strlen("project"));  //7
    printf("4. %d\n", strcmp(str,"project program java")); //0 
    printf("5. %s\n", strpbrk("project program java", "av"));  //av
    printf("6. %s\n", strstr("project program java", "je"));   //je
    printf("7. %s\n", strchr("project program java",'g')); //g
    printf("8. %s\n", strcat(str," C++")); //project program java C++
    printf("9. %s\n", strcpy(str, "project program")); // program java , 뒤에있는 것을 복사한후 복사된 문자열을 반환한다.
    printf("10. %s\n", memcpy(str, "python", strlen("python")+1));  //python


    return 0;
}
