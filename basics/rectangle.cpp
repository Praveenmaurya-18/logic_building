#include<stdio.h>

int main(){
	
	int l,b,area,perimeter;
	
	printf("enter the value of l and b:");
	scanf("%d %d",&l,&b);
	
	area = l*b;
	printf("the area of recangle is : %d\n",area);
	
	perimeter = 2*(l+b);
	printf("the perimeter of rectangle is :%d\n",perimeter);
	
	return 0;
}
