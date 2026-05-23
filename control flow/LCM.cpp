#include<stdio.h>

int main(){
	
	int i,n,a,b,max; 
	printf("enter the value of a and b:");
	scanf("%d %d",&a,&b);
	max=a;
	if(a<b){
		max=b;
	}
	while(1){
		
		if(max % a == 0 && max % b == 0){
			printf("LCM is:%d",max);
			
			break;
		}
		else{
			max++;
		
		}
	
	}
	
	return 0;
}
