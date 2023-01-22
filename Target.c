#include<stdio.h>
int main()
{
    int p1p1,p2p2,p3p3,p4p4;
    scanf("%d%d%d%d",&p1p1,&p2p2,&p3p3,&p4p4);
    if(p1p1>=10&&p2p2>=10&&p3p3>=10&&p4p4>=10)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}