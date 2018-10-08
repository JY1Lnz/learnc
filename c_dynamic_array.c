#include<stdio.h>
//定义两个指针 给与内存 相互赋值完成
//此程序 当输入为0时，判定下一个输入的数赋值到数组内
typedef struct array{
    int data;
    struct array * next;
}Dyarray;

void Init(Dyarray * L)
{
    L -> next = NULL;
}

void Insert(Dyarray * L,int e)
{
    Dyarray * p = L,* s;
    while(p->next != NULL)
    {
        p = p->next;
    }
    s = (Dyarray *)malloc(sizeof(Dyarray));
    s -> data = e;
    s -> next = NULL;
    p -> next = s;
}
int main()
{
    Dyarray array;
    Init(&array);
    int n;
    while(scanf("%d",&n) != EOF)
    {
        Insert(&array,n);
    }
    Dyarray * p = &array;
    while(p->next != NULL)
    {
        printf("%d ",p->next->data);
        p = p -> next;
    }

	return 0;
}
