#include<stdio.h>
int main(){
	printf("Kids under 5 age tickets are free\nseniors(65+) get a discount\n");
	int age;
	printf("enter your age : ");
	scanf("%d", &age);
	if(age<5) {
		printf(" you gate ticket free");
	}else if(age>65) {
		printf("you gate discount");
	}else {
		printf("you pay the standard price of ticket\n");
	}
	return 0;
}
