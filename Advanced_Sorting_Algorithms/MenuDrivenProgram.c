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

int partitionm(int arr[], int low, int high) {
    int mid = low + (high - low) / 2;
    int pivot = arr[mid];
    int i = low - 1;
    int j = high + 1;
    int temp;

    while (1) {
        do { i++; } while (arr[i] < pivot);
        do { j--; } while (arr[j] > pivot);

        if (i >= j) return j;

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void quicksortm(int arr[], int low, int high) {
    if (low < high) {
        int pivotin = partitionm(arr, low, high);
        quicksortm(arr, low, pivotin);
        quicksortm(arr, pivotin + 1, high);
    }
}

int partitionl(int arr[], int low, int high) {
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

void quicksortl(int arr[], int low, int high) {
    if (low < high) {
        int pivotin = partitionl(arr, low, high);
        quicksortl(arr, low, pivotin - 1);
        quicksortl(arr, pivotin + 1, high);
    }
}
void merge(int arr[],int low,int mid,int high){
    int a=high-low+1;
    int i,j,k,b[220];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            k++,i++;
        }
        else{
            b[k]=arr[j];
            j++,k++;
        }
    }
    while(i<=mid){
        b[k]=arr[i];
        k++,i++;
    }
      while(j<=high){
        b[k]=arr[j];
        k++,j++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=b[i];
    }
}
void mergesort(int arr[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
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
    printf("\nWhat do you want to perform?\n1.QuickSort\n2.Mergesort\nPlease Enter your choice:");
    int dec;
    scanf("%d",&dec);
    switch(dec){
    case 1:
        printf("\nChoose type of sorting :\n1.Pivot at Beginning\n2.Pivot at Middle\n3.Pivot at End\nEnter your choice: ");
        int choice;
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("The pivot element is:%d\n",arr[0]);
            quicksort(arr, 0, n - 1);
            break;
        case 2:
            printf("The pivot element is:%d\n",arr[0+((n-1-0)/2)]);
            quicksortm(arr, 0, n - 1);
            break;
        case 3:
            printf("The pivot element is:%d\n",arr[n-1]);

            quicksortl(arr, 0, n - 1);
            break;
        default:
        printf("Invalid Choice!!");
        break;
    }
    break;
    case 2:
        mergesort(arr,0,n-1);
        break;
        default:
            printf("Invalid choice. Sorting not performed.\n");
            break;



    
       
    }

    printf("The sorted array is:\n");
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }

    return 0;
}
