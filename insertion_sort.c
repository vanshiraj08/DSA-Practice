#include<stdio.h>

// FUNCTION TO PERFORM INSERTION SORT TO SORT THE ARRAY

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
         while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

//FUNCTION TO PRINT THE SORTED ARRAY

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

//DRIVER CODE

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
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}
