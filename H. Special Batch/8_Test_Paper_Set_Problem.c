#include <stdio.h>

int removeElementFromIntArray(int arr[], int n, int index) 
{
    int arr[n-1];
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

int removeElementFromCharArray(char arr[], int n, int index) 
{
    int arr[n-1];
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

int totalPermutations(int arrStudents[], char arrPaper[], int n) 
{

    if (n == 1) 
    {
        return 1;
    }
    
    int totalPermutation = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arrStudents[0] == arrPaper[i] - 'A' + 1) 
        {
            removeElementFromIntArray(arrStudents, n, 0);
            removeElementFromCharArray(arrPaper, n, i);
            totalPermutation += totalPermutations(arrStudents, arrPaper, n - 1);
        }
    }

    return totalPermutation;
}

int main() 
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int arrStudents[n];
    char arrPaper[n];

    for (int i = 0; i < n; i++) {
        arrStudents[i] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter the set for Student %d: ", i + 1);
        scanf(" %c", &arrPaper[i]);
    }

    int permutations = totalPermutations(arrStudents, arrPaper, n);
    printf("Total number of permutations: %d\n", permutations);

    return 0;
}
