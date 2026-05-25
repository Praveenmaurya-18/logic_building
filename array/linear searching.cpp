#include<stdio.h>
int main(){
	
	int i,n,key,flag,arr[1100];
	
	printf("enter the number of element in array:");
	scanf("%d",&n);
	
	printf("enter the element of array:");
	for(i=0;i<n;i++){
		
		scanf("%d",&arr[i]);
	}
	printf(" array is :");
	for(i=0;i<n;i++){
		
		printf(" %d ",arr[i]);
	}
	
	printf("enter the element for search:");
	scanf("%d",&key);
	
	for(i=0;i<n;i++){
		if(arr[i]==key){
			printf("the element is find at position %d",i+1);
			flag = 1;
			break;
		}
	}
	if(flag !=1){
		printf("element is not found in given array");
	}
	
	return 0;
}
