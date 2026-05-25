#include<stdio.h>

int main(){
	
	int arr[100],i,n,key,found=0;
	printf("enter the number of elements in array:\n");
	scanf("%d",&n);
	
		printf("enter the elements of array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf(" \narray is:\n");
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
	printf("\nenter the element for search:\n");
	scanf("%d",&key);
	
	for(i=0;i<n;i++){
		
		if(arr[i]==key){
			printf("\nthe element is found in array at index %d",i);
			found = 1;
			break;
		}
	
	}
	if(found==0){
		printf("the given element is not in the array");
	}
	
	
	return 0;
}
