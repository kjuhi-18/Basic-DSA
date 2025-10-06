#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) i++;
        while (j >= low && arr[j] > pivot) j--;

        if (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
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
        printf("%d ",arr[j]);
    }

printf("\nThe pivot element is:%d\n",arr[0]);
quicksort(arr, 0, n - 1);
printf("The sorted array is:\n");
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }
return 0;
            
}
