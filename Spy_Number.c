#include<stdio.h>
int main()
{
    int n,r=0,d,s=1;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        r=r+d;
        s=s*d;
        n=n/10;
    }
    if(r==s)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}