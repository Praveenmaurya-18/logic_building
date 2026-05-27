#include<stdio.h>
int main(){
	
	int i,j,n,key,arr[1000];
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
	for(i=1;i<n;i++){
		key = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
	arr[j+1] = key;
	}
	printf("\nthe sorted array is:\n");
		for(i=0;i<n;i++){
	printf(" %d ",arr[i]);
	}
}
