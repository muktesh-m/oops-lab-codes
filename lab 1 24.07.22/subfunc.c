#include <stdio.h>
//2)Write a function to subtract two values of type float and returns the result
float substraction(float num1,float num2)
{
    float sub;
    sub = num1 - num2;
    return sub;
}

int main()
{
    float number1, number2, result;
    printf("Enter two number: ");
    scanf("%f %f", &number1, &number2);
    result = substraction(number1, number2);
    printf("%.2f - %.2f = %.2f\n",number1, number2, result);
    return 0;
}
