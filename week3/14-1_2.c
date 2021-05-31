/*
14-1 다른 풀이
*/

#include <stdio.h>
#include <string.h>

#define MAX_ARY 128

void reverse(char *buf);
void reverseToken(char *ptoken);

int main(void)
{
    char buf[MAX_ARY] = "char a[]= \"cars\";";

   // fgets(buf, sizeof(buf), stdin); //fgets()를 쓰면 \n문자가 문자열의 일부로 포함되게 된다. 
                                    //=> strlen - 1을 해주므로써 \n > 0 으로 바꿔준다.
    reverse(buf);

}
//단어구분
void reverse(char *buf)
{
    char *ptoken, *delimeter = " ";

    //한개의 단어이므로 그 단어를 쪼개서 역순으로 출력 => reverseToken()
    for(ptoken = strtok(buf, delimeter); ptoken; ptoken = strtok(NULL, delimeter)) {
        reverseToken(ptoken);
        putchar(' ');
    }
}
//단어안에 각각의 문자를 출력
void reverseToken(char *ptoken)
{
    int i;
    
    for(i = strlen(ptoken) - 1; i >= 0; i--) {
        putchar(ptoken[i]);
    }
}