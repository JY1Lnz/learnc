#include<stdio.h>

typedef struct linknode
{
    int data;
    struct linknode * next;
}LinkStNode;

void Init(LinkStNode * L)
{
    L -> next = NULL;
}

void Push(LinkStNode * L,int e)
{
    LinkStNode * p = L,* s;
    s = (LinkStNode *)malloc(sizeof(LinkStNode));
    s -> data = e;
    s -> next = p -> next;
    p -> next = s;
}

int pop(LinkStNode * L)
{
    LinkStNode * p = L;
    LinkStNode * s = p -> next;
    p -> next = p -> next -> next;
    int a = s -> data;
    free(s);
    return a;
}
int main()
{
    LinkStNode stack;
    Init(&stack);
    long long number;
    scanf("%d",&number);
    while(number != 0)
    {
        Push(&stack,number%2);
        number /= 2;
    }
    LinkStNode * p = &stack;
    while(p -> next != NULL)
    {
        printf("%d",pop(p));
    }

    return 0;
}
