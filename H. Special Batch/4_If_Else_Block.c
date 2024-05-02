#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You Are Eligible For voting");
    }
    else
    {
        printf("You Are Not Eligible For Voting");
    }
}