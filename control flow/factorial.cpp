#include<stdio.h>

int main(){
	
	int i,n ,fact;
 
	printf("Enter the value of n:");
	scanf("%d",&n);
	fact = 1;
	for(i=1;i<=n;i++){
		fact = i*fact;
	}
	printf("factorial of %d is: %d ",n,fact);
	printf("\nTHANKS!!");
	
	return 0;
}
