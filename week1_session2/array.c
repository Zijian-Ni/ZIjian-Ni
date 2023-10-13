#include <stdio.h>

int main()
{
    int a[10], i;
    int count;
    for (count=0; count<10; count++)
    {
        a[count] = count * 10 + count;
    }
    printf("The first and second elements are %d and %d\n", a[0], a[11]);

    printf("Or, via pointers, %d and %d\n", *a, *(a+1));
}