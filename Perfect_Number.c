#include<stdio.h>
int main()
{
    int n,f,sum=0,i;
    scanf("%d",&n);
    f=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==f)
    printf("True");
    else
    printf("False");
}