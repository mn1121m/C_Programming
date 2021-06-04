/*
Advanced C renew
puts() <----> printf()
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    int age = 25;
    char buf[100];


    sprintf(buf ,"my age is %d.\n", age);
    
    printf("%s", buf);

    return 0;
}