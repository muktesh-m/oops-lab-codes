// WAP to test whether a number n is palindrome number or not.
#include <stdio.h>
int reverse(int a)
{
    int remainder, reversed = 0;
    while (a != 0)
    {
        remainder = a % 10;
        reversed = reversed * 10 + remainder;
        a /= 10;
    }
    return reversed;
}
int main()
{
    int n, original, rev;
    printf("Enter an number: ");
    scanf("%d", &n);
    original = n;

    rev = reverse(n);

    if (original == rev)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}