/*
practice 22 - 5

5. 주어진 연결리스트에 노드를 삽입하는 함수를 이용하여 리스트를 만들고 
리스트의 최소값과 최대값을을 찾아 출력하는 void printMinMax(NODE *h) 함수를 작성하시오. 
아래 주어진 코드는 변경하지 말고 사용할 것. (2점)

소요: 
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list {
    double data;
    struct linked_list* next;
} NODE;

NODE *insertHead(NODE *h, double data);

int main(void)
{
    int i, n;

    return 0;
}

NODE *insertHead(NODE *h, double data)
{
    NODE* node;

    node = (NODE*)malloc(iszeof(NODE));
    node->data = data;

    node->next = h;
    h = node;

    return h;
}