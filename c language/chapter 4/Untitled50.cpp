#include<stdio.h>
int sum_natural(int);

int sum_natural(int n){
	if(n==1){
		return 1;
	}
	return sum_natural(n-1) + n;
	}

int main(){
	int n =5;
printf("the sum of first 5 natural is %d",sum_natural(5))	;
	return 0;
}
