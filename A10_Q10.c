//10. Write a function to print all prime factors of a given number. For example, if the
//number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include<stdio.h>
#include<stdlib.h>
void primefactor(int n)
{
    for(int i=2;n>1;i++)
    while(n%i==0)
    {
        printf("%d",i);
        n=n/i;
    }
}
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    primefactor(n);
    getch();
    return 0;
}
