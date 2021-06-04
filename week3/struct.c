/* 열거형 구조체 구현 */

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

typedef enum _choice { readfile = 1, writefile = 2, termination = 3} choice;

void readFile();
void writeFile();
void terminate();

int main(void)
{
    choice ch;
    BOOL terminationflag = FALSE;

    puts("----------------");
    puts("메뉴를 선택하시오");
    puts("1. 파일 읽기");
    puts("2. 파일 쓰기");
    puts("3. 프로그램 종료");
    puts("----------------");
    while(!terminationflag) {
        printf(">>> ");
        ch = getchar() - '0';   // 문자 -> 숫자로 바꾼다.
        fflush(stdin);

        switch(ch) {
            case readfile:
                readFile();
                break;
            case writefile:
                writeFile();
                break;
            case termination:
                terminationflag = TRUE;
                break;
        }
    }
    return 0;
}

void readFile()
{
    puts("파일을 읽었습니다.");
}
void writeFile()
{
    puts("파일을 썼습니다.");
}

// ----------------
// 메뉴를 선택하시오
// 1. 파일 읽기
// 2. 파일 쓰기
// 3. 프로그램 종료
// ----------------
// >>>> 1
// 파일을 읽습니다.
// >>>>
