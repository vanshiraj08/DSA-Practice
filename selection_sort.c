// C PROGRAM TO IMPLEMENT SELECTION SORT

#include <stdio.h>

// FUNCTION TO SWAP TWO ELEMENTS OF ARRAY

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// FUNCTION TO SORT GIVEN ARRAY USING SELECTION SORT

void selectionSort(int arr[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {

        k = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[k])
                k = j;
        swap(&arr[k], &arr[i]);
    }
}

// FUNCTION TO PRINT THE SORTED ARRAY

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// DRIVER CODE

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element no. %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
