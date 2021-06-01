/*
Practice15 -2
다시()
*/

#include <stdio.h>
#include <string.h>

#define MAX_BUF_SIZE 256
#define TRUE 1
#define FALSE 0

int countSubStr(char *buf, char *word);

int main(void)
{
    char buf[MAX_BUF_SIZE];
    char *word = "Daegu";

    fgets(buf, sizeof(buf), stdin);

    printf("%d\n", countSubStr(buf, word));

    return 0;
}
int countSubStr(char *buf, char *word)
{
    int i, j, bufLeng = strlen(buf), wordLeng = strlen(word);
    int count = 0, flag;

    for(i = 0; i < bufLeng - wordLeng + 1; i ++) {

        flag = TRUE;
        for(j = 0; j < wordLeng; j ++)
            if(buf[i + j] != word[j]) { //한번이라도 다르면
                flag = FALSE;
                break;
            }
        if(flag) count++;    
    }
    return count;
}
/*
I live in Daegu. Daegu is a colorful city. I love Daegu. 
3
*/