#include<stdio.h>

int main()
{
    char c[6];
    scanf("%s",c);
    for (int i = 0;i < 6;i++)
        c[i] += i;
    printf("%s",c);

    return 0;
}
