#include<stdio.h>
int main(){
	// selection sort
	int i,n,j,temp,arr[100];
	printf("enter the number of element in array:\n");
	scanf("%d",&n);
	printf("\nenter %d elements\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n the unsorted array is\n");
	for(i=0;i<n;i++){
	printf(" %d ",arr[i]);
	}
	for(i=0;i<n-1;i++){
	int	minindex = i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[minindex]){
				minindex =j;
			}
		}
	temp = arr[i];
	arr[i] = arr[minindex];
	arr[minindex]= temp;	
	}
printf("\n the sorted array is:\n");
	for(i=0;i<n;i++){
	printf(" %d ",arr[i]);
	}
	return 0;
}
