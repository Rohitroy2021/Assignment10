//Write a function to check whether a given number contains a given digit or not.
//(TSRS)
#include<stdio.h>
int main()
{
    int m,n;
    printf("enter a number");
    scanf("%d%d",&m,&n);
    digit(m,n);
    getch();
    return 0;

}
int digit(int m,int n)
{
int a,b,c;
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n;
    if(a==m)
        printf("Number contains given digit(a)");
    else if(b==m)
        printf("Number contains given digit(b)");
    else if(c==m)
        printf("Number contains given digit(c)");
    else
        printf("number is not in Given digit");
    }
