#include<stdio.h>
int main (){
	
	int i,n,a=0;
	int c,b=1;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("the febonacci series is:\n");
	
	printf(" %d %d ",a,b);
	for(i=2;i<n;i++){
	
	c = a+b;
	printf(" %d ",c);
	
	a=b;
	b=c;
	
	 
}
printf("\n!!THANKS!!");
	return 0;
}
