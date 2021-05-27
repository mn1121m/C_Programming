/*
Practice14 -3
사용자로부터 비밀번호를 입력받으려 한다. 비밀번호를 2번 입력받아 두 값이 동일한 경우에는 프로그램을 종료하며, 
다를 경우에는 “Retry”를 출력하고 처음부터 다시 비밀번호를 입력받는 프로그램을 작성하시오. 
사용자는 최소 5자리 그리고 최대 10자리의 비밀번호를 입력해야하며 사용자가 입력한 값 대신에 ‘*’가 화면에 찍혀야 하며 
5자리 미만과 10자리 이상인 경우도 “Retry”를 출력하고 다시 시작한다. (2점)
*/

#include <stdio.h>
#include <string.h>

#define MAX_PWD_ARY 100
#define TRUE 1

int main(void)
{   
    char pwd_ary[MAX_PWD_ARY] = {0, };
    char pwd2_ary[MAX_PWD_ARY] = {0, };
    int i;
    
    while(TRUE) {
        printf("비밀번호 입력 : ");
        scanf("%s", pwd_ary);
        
        for(i = 0; i < strlen(pwd_ary); i++) {
            printf("*");
        }
        printf("\n");
        if(strlen(pwd_ary) < 5 || strlen(pwd_ary) > 10) {
            printf("Retry\n"); 
            continue;
        }

        printf("비밀번호 다시입력 : ");
        scanf("%s", pwd2_ary);
        for(i = 0; i < strlen(pwd2_ary); i++) {
            printf("*");
        }
        printf("\n");
        if(strlen(pwd2_ary) < 5 || strlen(pwd2_ary) > 10) {
            printf("Retry\n"); 
            continue;
        }
        //비교
        if(strcmp(pwd_ary, pwd2_ary)) {
            printf("Retry\n");
        }else
            break;
    }
    printf("종료\n");
    return 0;
}
 /*
    비밀번호 입력 : 123456
    ******
    비밀번호 다시입력 : 123457
    ******
    Retry
    비밀번호 입력 : 123
    ***
    Retry
    비밀번호 입력 : 12345678910
    ***********
    Retry
    비밀번호 입력 : 12345
    *****
    비밀번호 다시입력 : 12345
    *****
    종료
*/