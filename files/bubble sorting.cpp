#include<stdio.h>

int main(){
	
	int n,i,j,temp,arr[100];
	
	printf("enter the number of element in the array:\n");
	scanf("%d",&n);
	printf("\nenter %d elements:\n",n);
	
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);	
	}
	printf("\nthe unsorted array is:\n");
	for(i=0;i<n;i++){
	printf(" %d ",arr[i]);	
	}
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
		printf("\nthe sorted array is:\n");
	for(i=0;i<n;i++){
	printf(" %d ",arr[i]);	
	}
	
	printf("\nBubble Sort Done!!");
	return 0;
}
