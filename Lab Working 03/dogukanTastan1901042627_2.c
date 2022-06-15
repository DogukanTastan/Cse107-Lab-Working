#include <stdio.h>

int main()
{
	int j, i, height;
	printf("Height: ");
	scanf("%d", &height);
	
	for(i = 1; i <= height; i++){
	
		for(j = 0; j < (height-i); j++){
		
			printf(" ");
		}
		
	
		for(j = 0; j < (2*i - 1); j++){
			printf("*");
		}
	
	
		printf("\n");
	}
	
}
