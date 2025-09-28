#include<stdio.h>
int main(){
	printf("Stop for red\nCaution for yellow\nGo for green\n");
	char lightcolor;
	int powerOn;
	printf("enter value of PowerOn(1\0) : ");
	scanf("%d", &powerOn);
//  check Lightcolor
printf("enter light Color(R=red, Y=yellow, G=green) : ");
scanf(" %c", &lightcolor);
 if(powerOn==1){
 	if(lightcolor=='R' || lightcolor=='r') {
 		printf("\nStop");
	 }else if(lightcolor=='Y' || lightcolor=='y') {
	 	printf("Caution");
	 }else if(lightcolor=='G' || lightcolor=='g'){
	 	printf("Go");
	 }
 }else{
 	if(powerOn==0) {
 		printf("signal off");
	 }
 }	
	return 0;
}
