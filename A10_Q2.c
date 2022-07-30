//Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
void main()
{
    int p,r,t,Simpleinterest;
    printf("Enter principle ,rate and time :");
    scanf("%d%d%d",&p,&r,&t);
    Simpleinterest=si(p,r,t);
    printf("simple interest is %d:",Simpleinterest);
    getch();
    return 0;
}
int  si(int p,int r,int t)
{
    int s=(p*r*t)/100;
    return s;
}
