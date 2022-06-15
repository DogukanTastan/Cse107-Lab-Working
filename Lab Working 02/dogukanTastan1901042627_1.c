#include <stdio.h>

int main() {
    int n, i,s1,s2,top;
	s1 = 0; 
	s2 = 1;
   
    printf("Please enter how many terms you would like to print:");
    
	scanf("%d", &n);
    printf("Top %d terms :",n);
    
	for (i = 1; i <= n ; i=i+1) {
        
		printf("%d ", s1);
        top = s1 + s2;
        s1 = s2;
        s2 = top;
    }

    
}
