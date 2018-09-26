#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int status = 0;
    for (int i = 2;i < n/2+1;i++)
        if (n%i == 0)
    {
        status = 1;
        break;
    }
    if (status == 0)
        printf("Y");
    else
        printf("N");

	return 0;
}
