/*
practice 23 - 1
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