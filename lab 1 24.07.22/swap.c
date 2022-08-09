// WAP to swap the values of two variables by using a suitable user defined function (say  
#include <stdio.h>
void swap(int a, int b)
{
    printf("\nValues before swapping: %d %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nValues after swapping: %d %d", a, b);
}
int main(int argc, char const *argv[])
{
    int x, y;
    printf("Enter the 2 numbers to be swapped\n");
    scanf("%d %d", &x, &y);
    swap(x, y);
    return 0;
}