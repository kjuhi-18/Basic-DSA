#include<stdio.h>
int linearSearch(int arr[],int n,int key);
int binarySearch(int arr[],int n,int key);
int linearSearch(int arr[],int n,int key){
	int i,flag=0;
	for(i=0;i<n;i++){
		if(arr[i]==key){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("Found at %d",i)
	;}
	else{
		printf("Not found")
	;}
}
int binarySearch(int arr[],int n,int key){
	int begin=0;
	int end=n-1;
	while(begin<=end){
		int mid=begin+((end-begin)/2);
	
	if(arr[mid]==key){
		printf("Found at %d",mid);
		return 1;
	}
	if(arr[mid]<key){
		begin=mid+1;
	}
	else{
	
		end=mid-1;}}printf("Not found");
}

int main(){
	int n,key,i,choice;
	printf("enter the length of array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter the %d element:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter the element you want to find:");
	scanf(
	"%d",&key);
	printf("Please Choose\n1.LinearSearch\n2.Binary Search\n:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			linearSearch(arr,n,key);
		    break;
		case 2:
			binarySearch(arr,n,key);
			break;
		default:
			printf("Error");
			
	}
	
	


return 0;}
