#include<stdio.h>

int main(){
	
    double a,b,res;
	char op,error;
	
	printf("enter the oprator:");
	scanf("%c",&op);
	
	printf("enter the value of a and b:");
	scanf("%lf %lf",&a,&b);
	
	switch (op){
		
		case '+':
			res = a+b;
			break;
			case '-':
				res = a-b;
				break;
		
		case '*':
			res = a*b;
			break;
			
			case '/':
			res = a/b;
			break;
			
			default:
				printf("ERROR");
				res = error;
	}
	if(res != error){
		printf("%lf",res);
	}
	return 0;
}
