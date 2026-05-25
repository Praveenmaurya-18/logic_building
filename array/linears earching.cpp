#include<stdio.h>
int main(){
	
	int i,n,key,flag,arr[1100];
	
	printf("Enter the number of element in array:");
	scanf("%d",&n);
	
	printf("Enter the element of array:");
	for(i=0;i<n;i++){
		
		scanf("%d",&arr[i]);
	}
	printf(" Array is :\n");
	for(i=0;i<n;i++){
		
		printf(" %d ",arr[i]);
	}
	
	printf("\nEnter the element for search:");
	scanf("%d",&key);
	
	for(i=0;i<n;i++){
		if(arr[i]==key){
			printf("\nthe element is find at position %d",i+1);
			flag = 1;
		//	break;
		}
	}
	if(flag !=1){
		printf("Element is not found in given array!!");
	}
	printf("\n!!SEARCHING COMPLETE THANKS!!");
	return 0;
}
