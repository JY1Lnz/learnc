#include<stdio.h>
/*
int main()
{
    //累加输入，q键退出
    //实时显示
    //程序6.1
    long num;
    long sum = 0l;
    int status;

    printf("please enter a num\n");
    printf("enter q to quit\n");
    while((scanf("%ld",&num)))
    {
        sum += num;
        printf("The sum is:%ld\n",sum);
        printf("please enter next integer or quit\n");
    }

    return 0;
}*/

/*
int main()
{
    //循环题4
    //打出图案
    for (int i=5,x=1;i>0;i--,x++)
    {

        for (int j=i-1;j>0;j--)
            printf(" ");
        for (int j=0;j<x;j++)
            printf("%c",'A'+j);
        for (int j=x-1;j>0;j--)
            printf("%c",'A'+j-1);
        printf("\n");
    }

    return 0;
}
*/

/*
int main()
{
    int length;
    int number[10];
    int bottom,top;

    scanf("%d%d",&top,&bottom);
    length = top - bottom + 1;
    for (int i=0;i<length;i++)
         number[i]=bottom+i;
    for (int i=0;i<bottom;i++)
         printf("%d",number[i]);
}
*/

int main()
{
    char a = '4';
    printf("%d",a-48);

    return  0;
}
