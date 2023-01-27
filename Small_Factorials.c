#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        int n,i,f=1;
        scanf("%d",&n);
        for(i=n;i>=1;i--)
        {
            f=f*i;
        }
        printf("%d
",f);
    }
}