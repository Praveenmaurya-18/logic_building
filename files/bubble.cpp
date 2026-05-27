#include<stdio.h>

int main(){
	// bubble sorting
	int i,j,temp,n,arr[100],flag=0;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
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
	
	
	return 0;
}
