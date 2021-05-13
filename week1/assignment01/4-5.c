/* 4.pdf - 문제 5 */
//temp 사용하는 이유 ** 중요 **

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void) 
{
    int n1, n2;
    char operator, yn, temp;
     // temp를 함으로써 공간을 하나 만든다. 바로 넘어가지 않기 하기 위해서(enter처리하기 위해서), \n

    while(TRUE) 
    {
        printf("정수를 입력하세요 : ");
        scanf("%d", &n1);
        scanf("%c", &temp);

        printf("연산자를 입력하세요 : ");
        scanf("%c", &operator);
        scanf("%c", &temp);

        printf("정수를 입력하세요 : ");
        scanf("%d", &n2);
        scanf("%c", &temp);

        switch (operator)
        {
            case '+' :  printf(">>> %d + %d = %d\n", n1, n2, n1+n2);    break;
            case '-' :  printf(">>> %d - %d = %d\n", n1, n2, n1-n2);    break;
            case '*' :  printf(">>> %d * %d = %d\n", n1, n2, n1*n2);    break;
            case '/' :  
                if( n2 == 0 ) printf(">>> Error\n");
                else {
                    printf(">>> %d / %d = %.2lf\n", n1, n2, (double)n1/(double)n2);
                }
                break;
        }
        while(TRUE) 
        {
            printf("한번 더 수행 하시겠습니까? (Y/N) : ");
            scanf("%c", &yn);
            scanf("%c", &temp);     // \n

            if(yn == 'y' || yn == 'Y' || yn == 'n' || yn == 'N') break;
        }
        if(yn == 'n' || yn == 'N') break;
    }
    printf("프로그램을 종료합니다.\n");
    return 0;
}

/*
결과
정수를 입력하세요 : 30
연산자를 입력하세요 : /
정수를 입력하세요 : 4
>>> 30 / 4 = 7.50
한번 더 수행 하시겠습니까? (Y/N) : Y

정수를 입력하세요 : 25
연산자를 입력하세요 : /
정수를 입력하세요 : 0
>>> Error
한번 더 수행 하시겠습니까? (Y/N) : n
프로그램을 종료합니다.
------------------------------------------
정수를 입력하세요 : 10
연산자를 입력하세요 : +
정수를 입력하세요 : 5
>>> 10 + 5 = 15
한번 더 수행 하시겠습니까? (Y/N) : n
프로그램을 종료합니다
*/