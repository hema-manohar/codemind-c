#include<stdio.h>
int main()
{
    int t,s,b,m;
    scanf("%d%d%d",&t,&s,&b);
    m=(2*t*s*b*512)/1024;
    printf("%d KB",m);
}