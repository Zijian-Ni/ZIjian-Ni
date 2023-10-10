#include <stdio.h>
int main()
{
    printf("please type in the base of the rectangle:");
    float base;
    scanf("%f/\n", &base);
     printf("please type in the height of the rectangle:");
    float height;
    scanf("%f/\n", &height);
    float area = base * height;
    printf("the area of the rectangle is %f/n", area);
    return 0;
}