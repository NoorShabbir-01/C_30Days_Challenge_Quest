#include<stdio.h>
int main()
{
    int age;
    printf("Enter Age: ");
    scanf("%d",&age);
    (age<18)?printf("Sorry, you are not eligible for vote.\n"):printf("Bravo! You are eligible for vote.\n");
    return 0;
}