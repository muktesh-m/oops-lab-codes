#include <stdio.h>
// Write a function to multiply two values of type int &amp; double and returns the Result

double imultiply(int num1, double num2)
{
    double m = num1 * num2;
    return m;
}


int main()
{
    
    int number1; double number2, result;
    
    printf("Enter two number for integer calculation: ");
    scanf("%d %lf", &number1, &number2);
    result = imultiply(number1, number2);
    printf("%d * %.2lf = %.2lf\n", number1, number2, result);

   

    return 0;
}