#include<stdio.h>
int main()
{
    int n,d,r=0,x;
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if(x==r)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}