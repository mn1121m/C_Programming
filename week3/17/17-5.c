/*
practice 17 - 5 다시()

소요 : 2H 이상
- 질문 - 
+ 정렬이 안되는데 어떤게 잘못된건지 모르겠습니다.
+ 중복된 값을 삭제할 때는 해당 값 이후의 값을 앞으로 한 칸씩 당긴다. 
-> 어떻게 당겨야 하는 걸까요 ?
*/

#include <stdio.h>

#define MAX_ARY_SIZE 128

void sortWithoutDuplication(int *arr, int *size);

int main(void)
{
    int arr[MAX_ARY_SIZE], num = 10, i;
    
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    sortWithoutDuplication(arr, &num);

    for(i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
void sortWithoutDuplication(int *arr, int *size)
{
    int i, j, minIdx, temp;

    //sort
    for(i = 0; i < *size; i ++) {
        minIdx = i;
        for(j = i + 1; j < *size; j++) {
            if(arr[minIdx] > arr[j]) {
                minIdx = j;
            }
            temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }

}
/*
10
5 1 8 9 66 51 5 78 35 8
1 5 8 9 35 51 78 66 % 

*/