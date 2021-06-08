/*
practice 22 - 5 다시()

5. 주어진 연결리스트에 노드를 삽입하는 함수를 이용하여 리스트를 만들고 
리스트의 최소값과 최대값을을 찾아 출력하는 void printMinMax(NODE *h) 함수를 작성하시오. 
아래 주어진 코드는 변경하지 말고 사용할 것. (2점)

소요: 30M
- 질문 - 
InsertNode 그림으로 한번만 설명부탁드립니다!
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list {
    double data;
    struct linked_list* next;
} NODE;

NODE *insertHead(NODE *h, double data);
void printMinMax(NODE *h);

int main(void)
{
    int i, n;       //n : 노드갯수
    double data;    //data : linked_list - data값

    NODE* header = NULL;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%lf", &data);
        header = insertHead(header, data);
    }

    printMinMax(header);
    return 0;
}

NODE *insertHead(NODE *h, double data)
{
    NODE* node;

    node = (NODE*)malloc(sizeof(NODE));
    node->data = data;
    node->next = h;
    h = node;

    return h;
}

void printMinMax(NODE *h)
{
    double min, max;

    NODE * current = h;
    if(current)
        min = max =current->data;
    while(current) {
        if(current->data > max)
            max = current->data;
        else if(current->data < min)
            min = current->data;
        current = current->next;
    }
    printf("min : %.1lf\n", min);
    printf("max : %.1lf\n", max);
    return;
}
/*
7
2.3 4.5 9.0 7.8 6.7 8.5 1.2
min : 1.2
max : 9.0
*/