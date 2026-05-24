#include<stdio.h>

int main (){
FILE *fptr;
	fptr = fopen("praveen.txt", "w");
//	if(ptr == NULL){
//		printf("the file does not exist sorry \n");
//	}
//	else{
	
	int num = 432;
	 //fscanf(ptr, "%d", &num);
//	printf("the value of num is %d \n", num);
//	 fscanf(ptr, "%d", &num);
//	printf("the value of num is %d \n", num);
fprintf(fptr,"%d",num);
	fclose(fptr);
	return 0;
	//}
}
