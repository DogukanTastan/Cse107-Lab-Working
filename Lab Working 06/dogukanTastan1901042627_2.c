#include <stdio.h>
void print_line ( char c, int num_of_chars );
void print_histogram ( char c,int vals []);
int len ( int arr []);

int main (){ 

int values [100]; 
int val =1, count =0;

printf (" Enter positive integer (s), to print an histogram .\ nEnter a non - positive integer to stop .\n\n");

do{
	printf (" Enter a value :");
	scanf ("%d", & val);
	values [ count ] = val ;
	count ++;
	} while ( val > 0);
	print_histogram ('*', values );
	return 0;
}

int len ( int arr []) {
	
int i;
int num_of_chars=0;
 
 for(i=0;i<100;i++) {

 	
 	if(arr[i]>0){
 		num_of_chars++;
	 }
 
  if(arr[i]<0){
  	break;
  }
 }
	
	return num_of_chars;
}

void print_line( char c, int num_of_chars ){
	
	int i;
	for(i=0;i<num_of_chars;i++) {
		
		printf("%c",c);
		
	}
	
		
}

void print_histogram ( char c,int vals []) {
	int i;
	 int line=len(vals);
	 
	 for(i=0;i<line;i++){
	 
	 print_line(c,vals[i]);
	 printf("\n");
}
	
	
	
}






