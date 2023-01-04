#include<stdio.h>
int main()
{
    int i,n,m,s;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i=i+2)
    {
        s=n*i;
        printf("%d x %d = %d
",n,i,s);
    }
}