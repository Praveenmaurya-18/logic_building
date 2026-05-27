#include<stdio.h>
int main(){
// insertion sort	
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
	for(i=0;i<n;i++){
		key = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j=j-1;
		}
		arr[j+1] = key;
	}
	printf("\nthe sorted array is:\n");
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
	return 0;
}
