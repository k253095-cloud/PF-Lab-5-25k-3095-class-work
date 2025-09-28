#include<stdio.h>
int main(){
	printf("\nA student can only enroll if they have completed the prerequisite");
//	printf("prerequisite=p\ncoures=c\n");
	printf("\ncompleted prerequisite=1");
	printf("\ncourse is not full=0");
 int prerequisite, course;
 printf("\nenter value of prerequisite  : ");
 scanf(" %d", &prerequisite);
 printf("enter value of course : ");
 scanf(" %d", &course);
 if(prerequisite==1 && course==0) {
 	
 	printf("Enrolled successfully");
 }else if(prerequisite!=1 && course==0) {
 	
 	printf("Cannot enroll : prerequisite missing");
 }else if(prerequisite==1 && course!=0) {
 	
 	printf("Cannot enroll : course is full");
 }else if(prerequisite!=1 && course!=0) {
 	
 	printf("Cannot enroll : prerequisite missing and course is full");
 }
	return 0;
}
