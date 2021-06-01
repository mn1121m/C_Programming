/*
Practice16 - 4 다시()

소요: 1H 이상
- 질문 -
출력값에 대한 과정을 보고싶은데, debuging을 어떻게 하는지 모르겠습니다.
왜 출력값이 이렇게 되는지 모르겠습니다.
*/

#include <stdio.h>

void printLess(int n);

int main(void)
{
    int n;

    scanf("%d", &n);
    printLess(n);

    return 0;
}
void printLess(int n)
{
    if(n <= 0)
        return;
    
    printLess(n-1);
    printf("%d", n);
    printLess(n-1);
}
/*
5
1213121412131215121312141213121% 
*/