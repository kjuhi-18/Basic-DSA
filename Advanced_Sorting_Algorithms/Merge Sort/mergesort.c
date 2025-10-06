#include<stdio.h>
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
    mergesort(arr,0, n-1);
    printf("\nThe sorted array is:\n");
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
        
        
    }

    return 0;
}
