#include<stdio.h>

int main(){
	
	int arr[100][100];
	int i,j,row,col;
	printf("enter the number of row:");
	scanf("%d",&row);
	
	printf("enter nuber of coloumns:");
	scanf("%d",&col);
	
	printf("enter elements of array:");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("2d arrray is:\n");
	for(i=0;i<row;i++){
		
		for(j=0;j<col;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
}
