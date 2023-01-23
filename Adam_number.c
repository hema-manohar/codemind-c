#include<stdio.h>
int main()
{
    int n,a,s=0,b,c,d=0,r;
    scanf("%d",&n);
    a=n*n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    b=s*s;
    while(b!=0)
    {
        c=b%10;
        d=d*10+c;
        b=b/10;
    }
    if(d==a)
    printf("True");
    else
    printf("False");
}