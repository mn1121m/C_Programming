#include <stdio.h>

int main(int argc, char **argv)
{
    //printf("%c\n", getchar());  //char 1개를 받아온다.
    //while(getchar() != '\n'); 

    char buf[100];

    gets(buf);

    printf("%s\n", buf);
    putchar('3');
    

    return 0;
}

// <stdio.h>
// int getchar(void);        scanf
// char *gets(char *buf);

// int putchar(int c);       printf
// int puts(const char *str);

// int sscanf(const char *src, char *format, ...);
// int sprintf(char *dst, char *format, ...);

// int printf(char *format, ...);    char *format : Monitor
// int fpirntf(FILE *dst, char *format, ...);    FILE *dst: FILE
// int sprintf(char *dst, char *format, ...);    char *dst: String

// int scanf(char *format, ...);
// int fscanf(FILE *src, char *format, ...);
// int sscanf(const char *src, char *format, ...);

// printf -> Monitor :: stdout      cf) Monitor -> Terminal속 화면
// fprintf -> FILE :: FILE *
// sprintf -> String :: char []

// scanf -> Keyboard :: stdin
// fscanf -> FILE :: FILE *
// sscanf -> String :: char []



//format : 어떻게 출력할것인지 정하는 명제
//printf("[DEBUG] : cnt == %d\n", 4);   => %d : format