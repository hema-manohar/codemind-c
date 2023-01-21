#include<stdio.h>
int main()
{
    int n,i,r=1;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        r=r*i;
    }
    printf("%d",r);
}