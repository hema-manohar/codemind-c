#include<stdio.h>
int main()
{
    int m,n,i,h;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        if(m%i==0&&n%i==0)
        {
            h=i;
        }
    }
    printf("%d",h);
}