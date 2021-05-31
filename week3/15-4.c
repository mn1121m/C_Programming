/*
Practice15 - 4

소요: 0.5H
*/

#include <stdio.h>
#include <string.h>

#define MAX_STR 128

int main(void)
{
    char word[MAX_STR];

    printf("단어들을 입력하세요. (quit 입력시 종료) \n");
    scanf("%s", word);
    printf("\n");

    while(strcmp(word, "quit") != '\0') {
        printf("%s\n", word);
        scanf("%s", word);
    }
    return 0;
}

/*
단어들을 입력하세요. (quit 입력시 종료) 
ABC DEF CAT MOON QUEEN BEER aabc quit

ABC
DEF
CAT
MOON
QUEEN
BEER
aabc
*/