#include <stdio.h>
#include <ctype.h>

int toupper(int c);

int main(int argc, char **argv)
{
    printf("%c\n", toupper('a'));
    printf("%c\n", toupper('A'));

    printf("%c\n", tolower('a'));
    printf("%c\n", tolower('A'));
    
    return 0;
}

