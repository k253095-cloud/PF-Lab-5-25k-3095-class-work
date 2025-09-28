#include<stdio.h>
int main(){
	 printf("correct username for C\nwrong username for W\n");
	printf("Password correct for C\npasswordwrong for W\n"); 
  char username,password;

  printf("enter username : ");
  scanf(" %c", &username);
  
 //check correct password
 
 switch(username) {
 	    case 'C' :
		case  'c' :
			printf("enter your password(C/W) : ");
              scanf(" %c", &password);
		          switch(password) {
		          	case 'C' :
 	    	    	case 'c' :
					  printf(" Login successful (correct username and password)"); break;
 	    	    default : printf("incorrect password");	
			 	}
	   break;
	
		 default : printf("username incorrect");
		  }
	return 0;
}
