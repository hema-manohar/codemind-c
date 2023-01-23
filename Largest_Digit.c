#include<stdio.h>
int main()
{
    int n,a,i=0,r;
    scanf("%d",&n);
    a=n%10;
    while(n>0)
    {
        r=n%10;
        if(i<r)
        i=r;
        n=n/10;
    }
    printf("%d",i);
}