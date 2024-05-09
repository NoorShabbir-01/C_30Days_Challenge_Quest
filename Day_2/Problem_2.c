#include<stdio.h>
#include<math.h>
int main()
{
    int num[5],sum=0;
    float avg;
    printf("Enter five numbers: ");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
        sum += num[i];
    }
    avg = (float)sum / 5;
    printf("Sum: %d\n",sum);
    printf("Average: %.2f\n",avg);
    return 0;
}