#include <stdio.h>
int linearSearch(int *arr, int n, int key);
int binarySearch(int *arr, int n, int key);
int linearSearch(int *arr, int n, int key) {
    int i, flag = 0;
    for (i = 0; i < n; i++) {
        if (*(arr + i) == key) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        printf("Found at index %d\n", i);
    } else {
        printf("Not found\n");
    }
    return flag;
}
int binarySearch(int *arr, int n, int key) {
    int begin = 0;
    int end = n - 1;
    while (begin <= end) {
        int mid = begin + (end - begin) / 2;
        if (*(arr + mid) == key) {
            printf("Found at index %d\n", mid);
            return 1;
        } else if (*(arr + mid) < key) {
            begin = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    printf("Not found\n");
    return 0;
}

int main() {
    int n, key, i, choice;
    printf("Enter the length of array: ");
    scanf("%d", &n);


    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", (arr + i)); 
    }

    printf("Enter the element you want to find: ");
    scanf("%d", &key);

    printf("Please choose:\n1. Linear Search\n2. Binary Search\nChoice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            linearSearch(arr, n, key);
            break;
        case 2:
            binarySearch(arr, n, key);
            break;
        default:
            printf("Invalid choice\n");
    }	

    return 0;	
}

