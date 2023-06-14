#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("x");
        }
        for(j=0;j<1;j++)
        {
            printf("0");
        }
        for(j=i;j<n-1;j++)
        {
            printf("x");
        }
        printf("
");
    }
}