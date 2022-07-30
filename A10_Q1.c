//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
void main()
{
    int circle,radius;
    printf("Enter the radius");
    scanf("%d",&radius);
    circle=circle_area(radius);
    printf("area of circle is %d",circle);
    getch();
    return 0;
}
int circle_area(int radius)
{
    float c=(1.414*radius*radius);
    return c;
}
