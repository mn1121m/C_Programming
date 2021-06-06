/*
practice 19 - 5 다시()

- 질문 - 
삼각형의 유형은 {삼각형아님, 정삼각형, 이등변삼각형, 일반삼각형 } 4가지 종류로 나뉜다.
-> 이것을 enum으로 하라는 출제의도가 있는거같은데, 어떻게 헤야할지 몰라서 일단 다음과같이 구현했습니다.
*/

#include <stdio.h>
#include <stdlib.h>

void selection_sort(int *list, int size);

int main(void)
{
    int arr[3], i;

    // 사용자로부터 세 변의 길이 입력
    for(i = 0 ; i < 3; i ++) {
        scanf("%d", &arr[i]);
    }

    // 입력값이 제대로 되었는지 확인
    for(i = 0 ; i < 3; i++) {
        if(arr[i] <= 0) {
            printf("입력이 잘못되었습니다. \n");
            exit(EXIT_FAILURE);
        }
    }
    // 내림차순 정렬
    selection_sort(arr, 3);

    // 삼각형 성립조건
    // 가장 긴변의 길이가 나머지 두변의 길이의 합보다 작아야한다.
    if(arr[2] >= arr[0]  + arr[1]) {
        printf("삼각형이 아님\n");
        exit(EXIT_FAILURE);
    }   

    //정삼각형 성립조건
    // 세변의 길이가 동일한 삼각형
    if(arr[0] == arr[1] && arr[0] == arr[2] ) {
        printf("정삼각형\n");
        exit(EXIT_FAILURE);
    }
    //이등변삼각형 성립조건
    // 두변의 길이만 동일한 삼각형
    else if( arr[0] == arr[1] || arr[1] == arr[2]) {
        printf("이등변삼각형\n");
        exit(EXIT_FAILURE);
    }
    return 0;
}
void selection_sort(int *list, int size)
{
    int i, j, minIdx, temp;

    for(i = 0; i < size; i ++) {
        minIdx = i;
        for(j = i+1; j < size; j ++) {
            if(list[minIdx] > list[j]) 
                minIdx = j;
            temp = list[i];
            list[i] = list[minIdx];
            list[minIdx] = temp;
        }
    }
}
/*
3 3 3
정삼각형

5 1 2
삼각형이 아님

4 4 2
이등변삼각형
*/
