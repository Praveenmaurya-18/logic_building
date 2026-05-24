#include <stdio.h>

int main(){
	 int i =5;
	 printf("the value of i is %d\n",i); //5
	 i = i+5; // 10
	 printf ("the value of i is %d\n",i);
	printf("the value of i is %d\n",i++); // 10 
	 printf("the value of i is %d\n",i); // 11
	 
	 i +=2; // same as i = i+2
	 printf("the value of i is %d\n",i); // 13
	 // i++ prints i first and then increments i (post increment opretor)
	 // ++i increment i first and then prints i (pre increment opretor)	  
	return 0;
}
