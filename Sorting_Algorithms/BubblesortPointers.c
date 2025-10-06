#include <stdio.h>

void bubblesort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the length of array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the %d element of array: ", i + 1);
        scanf("%d", arr + i);
    }

    bubblesort(arr, n);

    printf("The sorted array is:\n");
    for (int j = 0; j < n; j++) {
        printf("%d ", *(arr + j));
    }

    printf("\n");
    return 0;
}
