#include<stdio.h>
int main(){
	float c,f;
	printf("enter temprature in farenhite:");
	scanf("%f",&f);
	c = 0.55*(f-32);
	printf("%f",c);
	return 0;
}
