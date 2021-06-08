/* 
practice 20 - 1
*/
#include <stdio.h>

#define MAX_LENGTH 256

int main(void)
{
    FILE *fp;
    char buf[MAX_LENGTH];

    if((fp = fopen("data,txt", "r")) == NULL) {
        printf("Cannot open the file.\n");
        exit(EXIT_FAILURE);
    }


    return 0;
}