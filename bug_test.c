#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a;
    a = getchar();
    while(n-- > 0)
    {
        char c;
        char last = 'a';
        int sum = 0;
        int element = 0;
        while((c = getchar()) != '\n')
        {
            if ((last <= 'Z')&&(c <= 'Z')&&(c >= 'A')&&(last >= 'A'))
                sum += element;
            switch(c)
            {
                case 'H':
                    element = 1;
                    break;
                case 'C':
                    element = 12;
                    break;
                case 'N':
                    element = 14;
                    break;
                case 'O':
                    element = 16;
                    break;
                case 'F':
                    element = 19;
                    break;
                case 'P':
                    element = 31;
                    break;
                case 'S':
                    element = 32;
                    break;
                case 'K':
                    element = 39;
                    break;
            }
            if (c >= '0'&&c <= '9')
                sum += element*(c-48);
            last = c;
        }
        if ((last <= '9')&&(last >= '0'))
            printf("%d\n",sum);
        else
            printf("%d\n",sum+element);
    }

	return 0;
}
