#include<stdio.h>
int main(){
	
	int arr[100][100],i,j,n, row,col,count = 0;
	
	printf("enter the number of row and col:");
	scanf("%d %d",&row,&col);
	
	printf("enter the elements:");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(arr[i][j]==0){
				count++;
			}
		}
		}
		n = (i*j)/2;
		if(count>=n){
			printf("the given matrix is sparse matrices!");
			printf("\nthe sparse matrix is:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
		printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}
		}
		
		else{
			printf("\nnot sparse!");
		}
	
	return 0;
}

