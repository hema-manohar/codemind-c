#include<stdio.h>
int main()
{
    int n,m,i,f=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%3==0)
        f++;
    }
    printf("%d",f);
}