//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    odd(n);
    getch();
    return 0;
}
void  odd(int n)
{
    for(int i=1;i<=n;i+=2)
     printf("odd number is %d\n",i);

}
