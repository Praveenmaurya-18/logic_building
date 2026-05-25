#include<stdio.h>
int main(){
	
	int arr[100],n,i,key,count=0;
	
	printf("enter the number elements in array:");
	scanf("%d",&n);
	
	printf("enter elements of array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("the array is:\n");
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
	
	printf("\nenter the key element:\n");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(arr[i]==key){
			count++;
			 
		}
		
	}
	printf("\nthe occurance of %d is %d",key,count);
	
	return 0;
}
