#include<stdio.h>
int tri(int a,int b,int c)
{
    if(a+b>c && a+c>b && b+c>a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x=tri(a,b,c);
    if(x==1)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid triangle");
    }
}