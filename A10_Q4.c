//Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    Natural(n);
    getch();
    return 0;
}
void  Natural(int n)
{
    for(int i=1;i<=n;i++)
    printf("nnatural number is %d\n",i);

}
