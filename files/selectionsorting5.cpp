#include<stdio.h>
int main(){
	
	int i,j,n,temp,min,arr[100];
	printf("enter the number of elements:\n");
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
		min = i;
		for(j=i;j<n;j++){
			if(arr[j]<arr[min]){
				min= j;
				
			}
			}
			temp = arr[i];
			arr[i]= arr[min];
			arr[min] = temp;
		}
	printf("\nthe sorted array is:\n");
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
}
