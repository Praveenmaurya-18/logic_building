#include<stdio.h>
int main(){
	
	int arr[100], i,n,max=arr[0];
	
	printf("enter the size of aray:");
	scanf("%d",&n);
	
	printf("the elements of array is :\n");
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	
	printf("the array is :\n");
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
 	
	for(i=0;i<n;i++){
	if(arr[i]>max){
		max = arr[i];
	}
	}
	printf("\n the maximum element in array is :%d",max);
	
	return 0;
}
