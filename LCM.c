#include<stdio.h>
int main()
{
    int m,n,i,hcl,lcm;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m&&i<=n;i++)
    {
        if(m%i==0&&n%i==0)
        hcl=i;
    }
    lcm=(m*n)/hcl;
    printf("%d",lcm);
}