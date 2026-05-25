#include<stdio.h>
int main(){
	
	int arr[100],i,n;
	
	printf("the number of elements in array is :");
	scanf("%d",&n);
	
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	
	
		printf("the array is:\n");
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
		
	}
	
int	max= arr[0] ;
	int min = arr[0];
	for(i=0;i<n;i++){
	if(arr[i]>max){
		max =arr[i];
	}
		 
	}
	printf("\nthe maximum element in array is: %d",max);
	
	for(i=0;i<n;i++){
	if(arr[i]<min){
		min =arr[i];
	}
		 
	}
	printf("\nthe minimum element in array is: %d",min);
	
	printf("\nTHANKS!!");
	return 0;
}
