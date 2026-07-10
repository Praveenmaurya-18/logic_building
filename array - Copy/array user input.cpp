#include<stdio.h>

int main(){
	int n,i;
	int arr[n];
	printf("enter the number of element :");
	scanf("%d",&n);
	
	printf("enter the elements of the array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("the array is: ");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	return 0;
	
}
