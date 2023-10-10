#include <stdio.h>
int main()
{
    printf("Please input the first number:");
    float f;
    scanf("%f/n", &f);
    printf("Please input the second number:");
    float s;
    scanf("%f/n", &s);
    float sum = f + s;
    printf("the sum is %f/n", sum);
}