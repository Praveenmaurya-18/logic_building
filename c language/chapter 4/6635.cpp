#include <stdio.h>

int main(){
	
	FILE *ptr;
	int num1, num2, num3;
	fptr = fopen("file.txt", "r");
	fscanf(fptr,"%d %d %d", num1, num2, num3);
	printf("the values are %d %d %d \n", num1, num2, num3)
	fopen("praveen1.txt", "r");
	
	fputc('c', ptr);
	return 0;
	
}
