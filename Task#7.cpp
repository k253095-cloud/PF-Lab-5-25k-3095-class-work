#include<stdio.h>
int main(){
	printf("binary 1=001 for read\nbinary 2=010 for write\nbinary 4=100 for EXECUTE\n");

     int permission;
     printf("enter for permission : ");
      scanf("%d", &permission);
      if(permission & 4){
	printf("\nAccess granted : Full control");
   }else	
    if((permission & 1 ) && (permission & 2)){
		printf("\nAccess granted : read and write");
	}else 
	  if(permission & 1) {
	  	printf("\nAccess granted : read-only");
	  }else {
	  	printf("\nAcess denied");
	  }
	
	return 0;
}
