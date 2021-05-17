/* Practice09 - 실습문제 4 */ 
#include <stdio.h>

void compareAry(int Aary[][3], int Bary[][3], int size);
int main(void)
{
    int Aary[3][3], Bary[3][3], i, j, size = 3;

    printf("3 * 3크기의 2차월 배열 A입력 : \n");
    for(i = 0; i < size ; i++) {
        for(j = 0; j < size; j++) {
            scanf("%d", &Aary[i][j]);
        }
    }

    printf("3 * 3크기의 2차월 배열 B입력 : \n");
    for(i = 0; i < size ; i++) {
        for(j = 0; j < size; j++) {
            scanf("%d", &Bary[i][j]);
        }
    }
    compareAry(Aary, Bary, size);

    return 0;
}
void compareAry(int Aary[][3], int Bary[][3], int size)
{
    int i, j, count;
    for(i = 0; i < size ; i++) {
        for(j = 0; j < size; j++) {
            if(Aary[i][j] == Bary[i][j]) 
                count = 0;
            else 
                count = 1;
        }
    }
    if(count == 0) 
        printf("same\n");
    else   
        printf("not same\n");
}
/*
출력결과
--------------------------------
3 * 3크기의 2차월 배열 A입력 : 
1 2 3 
4 5 6
7 8 9
3 * 3크기의 2차월 배열 B입력 : 
1 2 3
4 5 6
7 8 9
same
--------------------------------
3 * 3크기의 2차월 배열 A입력 : 
1 1 1
1 1 1
1 1 1
3 * 3크기의 2차월 배열 B입력 : 
1 1 1
1 1 1
1 1 0
not same
--------------------------------
*/
