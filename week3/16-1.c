#include <stdio.h>

void recursive(int num);

int main(void)
{
    int num;
    
    printf("입력 : ");
    scanf("%d", &num);
    
    printf("결과 : ");
    recursive(num);
    return 0;
}
void recursive(int num)
{
    if( num > 0) {
        printf("%d", num % 10);
        recursive(num / 10);
    }
    return;
}
