#include<stdio.h>
int main()
{
    int a,i,b,d,c;
    scanf("%d%d%d%d",&i,&b,&d,&c);
    a=(b+2*d)*(i+2*d)-i*b;
    printf("%d",a*c);
}