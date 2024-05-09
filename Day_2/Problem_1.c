#include<stdio.h>
#include<math.h>
int main()
{
    int length,width,area;
    printf("Enter length of the Rectangle = ");
    scanf("%d",&length);
    printf("Enter width of the Rectangle = ");
    scanf("%d",&width);
    area = length * width;
    printf("Area of the Rectangle = %d",area);
    return 0;
}