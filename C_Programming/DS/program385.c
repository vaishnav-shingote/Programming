#include <stdio.h>
#include <stdlib.h>j

#pragma pack(1)
struct node
{
    struct node *prev; //$
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

int main()
{
    printf("%d\n", sizeof(NODE));

    return 0;
}