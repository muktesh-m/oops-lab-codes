// 4)WAP to find the factorial of a number n by using a suitable user defined function (say fact) for it.
#include <stdio.h>
int fact()
{
    int i, fact = 1, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{

    printf("Enter a Number to Find Factorial: ");
    printf("\nFactorial of a Given Number is: %d ", fact());
    return 0;
}
