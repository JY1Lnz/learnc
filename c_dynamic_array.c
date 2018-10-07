#include<stdio.h>
//定义两个指针 给与内存 相互赋值完成
//此程序 当输入为0时，判定下一个输入的数赋值到数组内
int main()
{
    int * data_now;
    int * data_last;
    int last = 0;
    int now = 0;
    int n;
    int length = 0;
    while(scanf("%d",&n) != EOF)
    {
        if (n == 0)
        {
            int a;
            scanf("%d",&a);
            ++length;
            data_now = (int *)malloc(length*sizeof(int));
            if(length>1)
            {
                for (int i = 0;i<length-1;i++)
                    *(data_now+i) = *(data_last+i);
                *(data_now+(length-1)) = a;
                data_last = (int *)malloc(length*sizeof(int));
                for (int i = 0;i<length;i++)
                    *(data_last+i) = *(data_now+i);
            }
            else
            {
                data_now = (int *)malloc(length*sizeof(int));
                data_last = (int *)malloc(length*sizeof(int));
                *(data_now) = a;
                *(data_last) = a;
            }
        }
    }
    for (int i = 0;i<length;i++)
    {
        printf("%d  ",*(data_now+i));
    }

	return 0;
}
