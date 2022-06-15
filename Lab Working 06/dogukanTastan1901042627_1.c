#include <stdio.h>
#include <string.h>
void reverse_string ( char str []);

int main (){
char str_arr [100];

printf ("Enter a string :");
scanf ("%s", str_arr );
reverse_string ( str_arr );
printf ("Reversed string is: %s \n", str_arr );

}

void reverse_string ( char str []) {
	int i;
	int j=0;
	int size = strlen(str);
	char arr2[size];
	
	for (i=size-1,j=0;i>=0;i--,j++) {
		
		 arr2[j] = str[i];
		
	}
	
	for(i=0;i<size;i++){
		
		
		str[i]=arr2[i];
		
	
	}
		
}
