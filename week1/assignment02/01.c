#include <stdio.h>

void star(int n);
void star2(int n);

int main(void)
{
    int num; 

    printf("*의 갯수 입력 : ");
    scanf("%d", &num);
    star(num);
    star2(num);


    return 0;
}

void star(int n)
{
    int i;
    if(n) {
        for(i = 0 ; i < n; i++) 
            printf("*");
        printf("\n");

        //Recursive position
        star(n-1);
    }   
    
}
void star2(int n)
{
    int i;

    if(n) {
        star2(n -1);

        for(i = 0; i < n ; i++ )
            printf("*");
        printf("\n");
    } 
}
