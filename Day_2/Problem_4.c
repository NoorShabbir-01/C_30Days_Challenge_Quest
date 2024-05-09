#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    
    // Bitwise AND
    printf("%d & %d = %d\n",num1,num2,num1&num2);
    // Bitwise OR
    printf("%d | %d = %d\n",num1,num2,num1|num2);
    // Bitwise XOR
    printf("%d ^ %d = %d\n",num1,num2,num1^num2);
    // Right Shift with 2
    printf("%d >> %d = %d\n",num1,2,num1>>2);
    // Left Shift with 2
    printf("%d << %d = %d\n",num2,2,num2<<2);

    return 0;
}