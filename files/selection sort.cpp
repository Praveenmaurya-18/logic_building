#include<stdio.h>
int main(){
	
	int i,j,n,min,temp,arr[1000];
	printf("enter the number of elements in array:\n");
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
		min =i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min =j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
	
	printf("\nthe sorted array is:\n");
		for(i=0;i<n;i++){
	printf(" %d ",arr[i]);
	}
	return 0;
}
