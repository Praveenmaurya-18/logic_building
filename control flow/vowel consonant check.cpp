#include<stdio.h>
int main(){
	char ch,a,e,i,o,u;
	printf("enter ch:");
	scanf("%c",&ch);
	
	if(ch==a||ch==e||ch==i||ch==o||ch==u){
		printf("%c is vowel",ch);
		
}
//	else if(ch >= 0 || ch<0){
//		printf("%c is number",ch);
//	}
	else{
		printf("%c is consonant",ch);
	}

	return 0;
}
