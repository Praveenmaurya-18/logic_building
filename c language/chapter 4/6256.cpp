#include<stdio.h>

int main(){
	char i = 'A';
	char* j = &i;
	float k = 5.321;
	float* k1 = &k;
	printf("the address of i is %p\n",&i);
	printf("the address of i is %u\n",j);
    printf("the adress of k is %p\n",&k);
printf("the value at address j is %d\n",*(&i));
	return 0;
}
