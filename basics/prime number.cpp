#include<math.h>
#include<stdio.h>
int main(){
	int n,i;
	int count = 0;
	printf("enter the value of n:");
	scanf("%d",&n);
	if(n<2)
		printf("not defined");
	else {
		for(i=2;i*i<n;i++){
			if(n%i==0)
				count++;
			
		}
		if(count>0)
			printf("%d is not prime number ",n);
			
		
			else{
				printf(" %d  is  prime ",n);
			}
		
	}
	
	
	return 0;
}
