//Write a function to calculate the number of combinations one can make from n items
//and r selected at a time. (TSRS)
#include<stdio.h>
void main()
{
    int n,r;
    printf("Enter a number :");
    scanf("%d%d",&n,&r);
    combination(n,r);
    getch();
    return 0;
}
int p=1,c;
int factorial(int n)
{
    for(int i=1;i<=n;i++)
    p=p*i;
     printf("%d\n",p);
     return p;
}
int combination(int n,int r)
{
     c=(factorial(n)/factorial(r)*factorial(n-r));
     printf("Combination is %d",c);

    return c;
}
