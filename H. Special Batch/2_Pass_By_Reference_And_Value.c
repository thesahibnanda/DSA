// Array Can't Be Passed By Value In C
// Array Only Gets Passed As Reference In C

// For Variables See Below
#include <stdio.h>

// Function prototypes
void passByValue(int x);
void passByReference(int *x);

int main() 
{
    int num1 = 5;
    int num2 = 5;

    printf("Before passByValue, num1 = %d\n", num1);
    passByValue(num1);
    printf("After passByValue, num1 = %d\n", num1);

    printf("Before passByReference, num2 = %d\n", num2);
    passByReference(&num2);
    printf("After passByReference, num2 = %d\n", num2);

    return 0;
}

// Function to demonstrate pass by value
void passByValue(int x) 
{
    x = x * 2;
    printf("Inside passByValue, x = %d\n", x);
}

// Function to demonstrate pass by reference
void passByReference(int *x) 
{
    *x = *x * 2;
    printf("Inside passByReference, *x = %d\n", *x);
}
