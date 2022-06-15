#include <stdio.h>

main(){
	
	printf("Height: ");
	int h;
	scanf("%d",&h);
	
	int i;
	for(i=1;i<=h;i++){
		int j;
		for(j=1;j<=i;j++){
			
			printf("*");
		}
		
		
		printf("\n");
		
	}
	
	
}
