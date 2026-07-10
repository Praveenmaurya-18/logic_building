#include<stdio.h>
int main(){
	// average of all element present in array
	int i,n,arr[100];
	
	float avg,sum=0;
	printf("enter the number of element in array:\n");
	scanf("%d",&n);
	printf("\nenter %d elements\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	printf("\n the array is\n");
	for(i=0;i<n;i++){
	printf(" %d ",arr[i]);
	}
	for(i=0;i<n;i++){
		sum = sum +arr[i];
	}
	printf("\nthe sum is %f",sum);
	
	
	avg = sum/n;
	printf("\nthe average of all element of array is %f",avg);
	return 0;
}

