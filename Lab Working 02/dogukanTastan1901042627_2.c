#include <stdio.h>


int main() {
    int i,n,kalan = 0;
    
	printf("Enter positive number : ");
    
	scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i) {

        if (n % i == 0) {
            kalan = 1;
            break;
        }
    }

    if (n == 1) {
        printf("1 is not prime");
    }
    
	else {
        if (kalan == 0)
            printf("%d is prime number.", n);
       
	    else
            printf("%d is not prime number.", n);
    }

    return 0;
}
