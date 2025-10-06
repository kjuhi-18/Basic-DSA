#include<stdio.h>
void insertionsort(int *arr,int n);
void insertionsort(int *arr,int n){
    int i,j;
    for(i=1;i<n;i++){
        int key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            *(arr+j+1)=*(arr+j);
            j--;
        }
        *(arr+j+1)=key;
    }

}
    int main() {
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the %d element of array: ", i + 1);
        scanf("%d",arr+i);
    }

    insertionsort(arr, n);

    printf("The sorted array is:\n");
    for (int j = 0; j < n; j++) {
        printf("%d ", *(arr+j));
        
        
    }

    return 0;
}
