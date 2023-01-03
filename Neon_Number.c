#include<stdio.h>
int main()
{
    int n,f,sum=0,m,k;
    scanf("%d",&n);
    f=n*n;
    k=n;
    while(f>0)
    {
        m=f%10;
        sum=sum+m;
        f=f/10;
    }
    if(sum==k)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}