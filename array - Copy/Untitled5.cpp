#include<stdio.h>
void transpose(int arr[100][100],int row, int col){
	int i,j; 
	printf("transpose matrix:\n");
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
			printf(" %d ",arr[j][i]);
		}
		printf("\n");
	}
}
int main(){

int arr[100][100],row ,col,i,j;

printf("enter the number of row and col:");
scanf("%d %d",&row,&col);

printf("enter the elements of array:");
for(i=0;i<row;i++){
	for(j=0;j<col;j++){
		scanf("%d",&arr[i][j]);
	}
}	
printf("the array is:\n");
for(i=0;i<row;i++){
	for(j=0;j<col;j++){
		printf(" %d ",arr[i][j]);
	}
	printf("\n");
}	
transpose(arr,row,col);
return 0;
}
