#include<stdio.h>
void selectionSort(int arr[], int n);

void selectionSort(int arr[], int n){
	int i=0,j=0,minIndex,temp;
	for(i=0;i<n-1;i++){
		minIndex=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[minIndex]){
				minIndex=j;
			}
		}
	temp=arr[i];
	arr[i]=arr[minIndex];
	arr[minIndex]=temp;
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

    selectionSort(arr, n);

    printf("The sorted array is:\n");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
        
        
    }

    return 0;
}
