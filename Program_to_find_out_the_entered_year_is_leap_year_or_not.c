#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%400==0)
    printf("True",n);
    else if(n%100==0)
    printf("False",n);
    else if(n%4==0)
    printf("True",n);
    else
    printf("False",n);
}