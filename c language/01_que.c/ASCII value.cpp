#include <stdio.h>
int main(){
	char ch = 'a';
	printf("the charector is %c\n");
	printf("the value of charector is %d\n", ch);
	// 97,122
	if(ch >= 97 && ch<=122){
		printf("this charactor is lowercase\n");
	}
	else {
		printf("this charector not lowercase \n");
	}
	return 0;
}
