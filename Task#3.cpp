#include<stdio.h>
int main(){
	int a, b, c,D;
	printf("enter value of variable(a, b, c) : ");
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d", &D);
	D=b*b-(4*a*c);
	if(D>0) {
		printf("Two real roots %d", D);
	}else if(D==0) {
		printf("one real root %d", D);
	}else if(D<0){
		printf("Imaginary roots %d", D);
	}else {
		printf("thank you");
	
	}
	return 0;
}
