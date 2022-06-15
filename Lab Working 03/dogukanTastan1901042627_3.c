#include <stdio.h>
int compositefonk(int n);

main(){
	
		printf("Enter number: ");
		int s;
		scanf("%d",&s);
		int t;
		
		for(t=1;t<=s;t++){
			
			if(compositefonk(t)==1)
		 printf("\n%d is composite", t);
			
		}
		
	
		}
		

int compositefonk(int n) {
	
	int i;
	for (i = 2; i <= (int) (n/2); ++i) {

        if (n % i == 0){
        	return 1;
		}
            
    }
	
            return 0;

}
