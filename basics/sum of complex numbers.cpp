#include<stdio.h>

	typedef struct complexnumber{
		int real;
		int img;
		
	}complex;
	complex add(complex x,complex y);
	
	int main(){
		complex a,b,sum;
	
		printf("enter a.real and a.img:");
		scanf("%d %d",&a.real,&a.img);
		
	
		
		printf("enter b.real and b.img:");
		scanf("%d %d",&b.real,&b.img);
		
		printf("\n a = %d + %di",a.real,a.img);
		printf("\n b = %d + %di",b.real,b.img);
		
		sum = add(a,b);
		printf("\n sum = %d + %di",sum.real,sum.img);
		return 0;
	}
	
	complex add(complex x,complex y){
		
	complex add;
	add.real = x.real + y.real;
	add.img = x.img + y.img;
	
	return(add);
}

