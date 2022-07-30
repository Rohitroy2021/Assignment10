//Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    factorial(n);
    getch();
    return 0;
}
int p=1;
int factorial(int n)
{
    for(int i=1;i<=n;i++)
    p=p*i;
     printf("odd number is %d\n",p);
     return p;
}
