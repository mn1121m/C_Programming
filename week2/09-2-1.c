/* Practice09 - 실습문제 1
1.키보드로 대문자로 구성된 영어 문자열을 한 줄 입력하고 입력한 문자열을 암호화하는 프로그램을 작성하라.  
*/
//다시()

#include <stdio.h>
#include <string.h>

#define MAX_BUF_SIZE 100

void encrypt(char *plain, char *encoding, int size, char *buf, int bufSize);
int main(void)
{
    char buf[MAX_BUF_SIZE];
    char code1[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char code2[30] = "hknopijxyzqfgmvwulastbcrde";

    fgets(buf, MAX_BUF_SIZE, stdin); //fgets => enter포함되는 함수
    buf[strlen(buf) - 1] = '\0'; // enter부분에 null값 넣기.

    encrypt(code1, code2, 30, buf, strlen(buf));
    printf("%s", buf);

    return 0;
}

void encrypt(char *plain, char *encoding, int size, char *buf, int bufSize)
{
    int i, j;   //i는 bufsize만큼 돌고, j는 해당값 위치

    // I AM STUDENT
    // y hg astopms

    for(i = 0; i < bufSize; i++) {
        if (buf[i] == ' ' ) continue;
        for(j = 0; j < size; j++) 
            if(plain[j] == buf[i]) break;   // 찾으면 반복문나오기
        buf[i] = encoding[j];
    }
}