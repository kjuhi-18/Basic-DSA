#include<stdio.h>
struct stud{
	int rollno;
	char name[50];
	int batch;
};
int logicSearch(struct stud s[],int n,int key);
int binarySearch(struct stud s[],int n,int key);
int logicSearch(struct stud s[],int n,int key){
	int i,flag=0;
	for(i=0;i<n;i++){
		if(s[i].rollno==key){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("Roll Number\tName\tBatch\n");
		printf("%d\t",s[i].rollno);
		printf("%s\t",s[i].name);
		printf("%d\t",s[i].batch);
	;}
	else{
		printf("Not found");}
}
int binarySearch(struct stud s[],int n,int key){
	int begin=0;
	int end=n-1;
	while(begin<=end){
		int mid=begin+((end-begin)/2);
	
	if(s[mid].rollno==key){
		printf("RollNumber\tName\tBatch\n");
		printf("%d\t",s[mid].rollno);
		printf("%s\t",s[mid].name);
		printf("%d\t",s[mid].batch);
	
		return 1;
	}
	if(s[mid].rollno<key){
		begin=mid+1;
	}
	else{
	
		end=mid-1;}}printf("Not found");
}
int main(){
	int n,key,i,choice;
	printf("enter the number of students:");
	scanf("%d",&n);
	struct stud s[n];
	for(i=0;i<n;i++){
		printf("Enter the details of  %d student\n",i+1);
		printf("Enter the roll No of  %d student :",i+1);
		scanf("%d",&s[i].rollno);
		getchar();
		printf("Enter the Name of  %d student :",i+1);
		gets(s[i].name);
		printf("Enter the batch of  %d student :",i+1);
		scanf("%d",&s[i].batch);
		
	}
	printf("Enter the roll number of the student you want to find:");
	scanf(
	"%d",&key);
	printf("Please Choose\n1.LinearSearch\n2.Binary Search\n:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			logicSearch(s,n,key);
		    break;
		case 2:
			binarySearch(s,n,key);
			break;
		default:
			printf("Error");
			
	}
	
	


return 0;}
