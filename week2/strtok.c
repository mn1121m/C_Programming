#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
   char str[] = "you should be a free man, woman, and so on.";
   char *ptr, *s;
   char *delimeters = " ,.";

   //strtok(str, delimeters);
   //printf("%s\n", ptr);

    // while(ptr != NULL) {
    //     ptr = strtok(NULL, delimeters);
    //     printf("%s\n", ptr);
    // }
    ptr = strtok(str, delimeters);
    for(; ptr != NULL; ptr = strtok(NULL,delimeters)) {
        printf("%s\n", ptr);
    }

    return 0;
}

//char *strcpy(char *dest, const char *source);
//int strcmp(const char *str1, const char *str2);
//char *strtok(char *str, const char *delimeters);
//size_t strlen(const char *str); 크기를 반환