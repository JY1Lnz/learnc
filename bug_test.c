#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    scanf("%d",&n);
    for (int i = 1;i <= n;i++)
    {
        int j = i;
        if (i%7 == 0)
        {
            sum++;
            continue;
        }
        while(j != 0)
        {
            int number = j%10;
            if (number == 7)
            {
                sum++;
                j = 0;
            }
            j /= 10;
        }
    }
    printf("%d",sum);

	return 0;
}
