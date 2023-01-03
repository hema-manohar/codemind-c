#include<stdio.h>
int main()
{
    int n,sum=0,pro=1,m;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        pro=pro*m;
        n=n/10;
    }
    printf("%d",pro-sum);
}