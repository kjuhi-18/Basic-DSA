#include <stdio.h>
void bubblesort(int arr[],int n);
void bubblesort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

			}
		}
	}
}
void bubblesortp(int *arr, int n);
void bubblesortp(int *arr, int n) {
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
void selectionSortp(int *arr, int n);

void selectionSortp(int *arr, int n){
	int i=0,j=0,minIndex,temp;
	for(i=0;i<n-1;i++){
		minIndex=i;
		for(j=i+1;j<n;j++){
			if(*(arr+j)<*(arr+minIndex)){
				minIndex=j;
			}
		}
	temp=*(arr+i);
	*(arr+i)=*(arr+minIndex);
	*(arr+minIndex)=temp;
	}
}
void insertionsortp(int *arr,int n);
void insertionsortp(int *arr,int n){
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
void insertionsort(int arr[],int n);
void insertionsort(int arr[],int n){
    int i,j;
    for(i=1;i<n;i++){
        int key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

}

int main(){
    char ca;
	do{int choice,n;
	printf("Please choose the action:\n1.Bubblesort\n2.Bubblesort with Pointers\n3.Selection Sort\n4.Selection sort with pointer\n5.Insertion Sort\n6.Insertion Sort with pointers\n");
	printf("Please choose the appropriate index number:");
	scanf("%d",&choice);
	printf("Enter the length of array:");
	scanf("%d",&n);
	int arr[n];
	switch(choice){
		case 1:
		for (int i = 0; i < n; i++) {
        printf("Enter the %d element of array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    bubblesort(arr, n);

    printf("The sorted array is:\n");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
        
        
    }
	break;
	
	case 2:
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
	break;
	case 3:
	for (int i = 0; i < n; i++) {
        printf("Enter the %d element of array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    printf("The sorted array is:\n");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
        
        
    }
	break;
	case 4:
	for (int i = 0; i < n; i++) {
        printf("Enter the %d element of array: ", i + 1);
        scanf("%d", arr+i);
    }

    selectionSort(arr, n);

    printf("The sorted array is:\n");
    for (int j = 0; j < n; j++) {
        printf("%d ", *(arr+j));
        
        
    }
	break;
	case 5:
	for (int i = 0; i < n; i++) {
        printf("Enter the %d element of array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    insertionsort(arr, n);

    printf("The sorted array is:\n");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
        
        
    }
	break;
	case 6:
	for (int i = 0; i < n; i++) {
        printf("Enter the %d element of array: ", i + 1);
        scanf("%d",arr+i);
    }

    insertionsortp(arr, n);

    printf("The sorted array is:\n");
    for (int j = 0; j < n; j++) {
        printf("%d ", *(arr+j));
        
        
    }
	break;

	default:
	printf("Invalid choice!");
    break;



}

printf("\nWant to continue?(Y/N):");
getchar();
scanf("%c",&ca);
}while(ca=='Y');
return 0;
}
