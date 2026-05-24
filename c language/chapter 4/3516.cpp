#include<stdio.h>
int main(){
	char st[] = "abc"; //no need of null charector
//	char st[] = {'a','b','c', '\0'} here need of null of charector
// both ways are right
	for (int i = 0; i<=3; i++) 
	{
		printf("character is %c \n", st[i]);
	}
		return 0;
}
