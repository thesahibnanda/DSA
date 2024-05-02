#include <stdio.h>

void pass(int arr[]) // Array Can't Be Passed By Value In C, Array Only Gets Passed As Reference In C
{
    arr[0] = 100;
}

int main()
{
    int arr[] = {1, 4, 2, 3, 5, 7, 4, 6, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 1; i<n-1; i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    pass(arr);
    printf("%d", arr[0]);

    return 0;
}