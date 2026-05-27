#include<stdio.h>
int main(){
	// selection sort
	
	int i,j,n,key,arr[100];
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
		printf("\nthe unsorted array is:\n");
	for(i=1;i<n;i++){
		printf(" %d ",arr[i]);
	}
	
	
	
	return 0;
}
