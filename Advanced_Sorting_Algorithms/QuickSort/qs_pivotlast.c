#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1;
    int temp;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1; 
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivotin = partition(arr, low, high);
        quicksort(arr, low, pivotin - 1);
        quicksort(arr, pivotin + 1, high);
    }
}

int main() {
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the %d element of array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The unsorted array is:\n");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }

    quicksort(arr, 0, n - 1);

    printf("\nThe sorted array is:\n");
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }

    return 0;
}
