#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main(){
	int array[10][10];
	double top[10];
	int i,j;
	srand(time(NULL)); 
	
	
	for(i=0;i<10;i++){
		
		for(j=0;j<10;j++) {
			
			array[i][j]=(rand()%80)+20;
			
		}
			
	}
			
			for(i=0;i<10;i++){
				for(j=0;j<10;j++){
				
				printf("%d",array[i][j]);
				printf(" ");
				
				}	
				printf("\n");
			}
			
			for(i=0;i<10;i++){
				for(j=0;j<10;j++){
					
					top[i]=((top[i])+(array[j][i]));
						
				}	
			}
			
			printf("\n");
			for(i=0;i<10;i++){
				
				printf("%0.1f\n",top[i]);
				
				
			}
			
		
		
		
	
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
	
	
	




































