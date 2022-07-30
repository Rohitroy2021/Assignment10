//Write a function to check whether a given number is even or odd. Return 1 if the
//number is even, otherwise return 0. (TSRS)
#include<stdio.h>
void main()
{
    int n,Od;
    printf("Enter a number:");
    scanf("%d",&n);
    Od=odd_even(n);
    printf("Number is %d",Od);
    getch();
    return 0;
}
int  odd_even(int n)
{
    if(n%2==0)
        return 1;
        else if(n%2==1)
            return 0;
}
