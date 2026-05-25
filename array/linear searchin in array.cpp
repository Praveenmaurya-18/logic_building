#include<stdio.h>

int main(){
	
	int arr[100],i,n,key,found=0;
	printf("enter the number of elements in array:");
	scanf("%d",&n);
	
		printf("\nenter the f elements of array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n array is :");
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
	printf("\nenter the key for search:");
	scanf("%d",&key);
	
	for(i=0;i<n;i++){
		
		if(arr[i]==key){
			printf("\nthe element is found in array at index %d\n",i);
			found=1;
		}
		
	}
	 if(found!=1){
		printf("the element is not found in array");
	}
	return 0;
}
