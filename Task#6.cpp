#include<stdio.h>
int main(){
	printf("L for living room\nK for kitchen\n");
	printf("L for lights\nT for thermostat\n");
	char room,action;
	printf("enter room : ");
	scanf(" %c", &room);
	switch(room) {
		case 'L' :
		case 'l' :
		 //printf("Adjusting ambient lighting\n"); 
		              	printf("enter action : ");
			          scanf(" %c", &action);
			         
		                switch(action) {
		       	    case 'L' :  printf("Adjusting ambient lighting\n"); break;
		       	   	case 'T' : printf("\nsetting living room temperature"); break;
		       	    default  : printf("An other room"); break;
		       	}  
				   break;    
		case 'K' :
		case 'k' :
		 // printf("Setting living room temperature\n"); 
		        	printf("enter action : ");
			        scanf(" %c", &action);
		               switch(action) {
		       	case 'L' : printf("\nTurning on bright task lighting"); break;
		       	case 'T' : printf("\nsetting kitchen temperature"); break;
		       	default : printf("\nAn other action"); break;
			   }
			       break;
		default : printf("\nthis room is other"); break;	   	
	}
	
	return 0;
}
