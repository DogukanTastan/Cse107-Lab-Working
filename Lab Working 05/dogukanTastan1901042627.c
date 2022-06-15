#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int find_mode(int n,int arr[]);
int find_number_of_x(int x,int n,int arr[]);
int find_max(int arr[]);


int main(){
	int n = 100;
	srand(time(NULL));  
	int arr[n];
	int i;
	
	for(i = 0;i<n;i++){
		arr[i] = rand()%10+1;
	}
	
	for(i = 1;i<=10;i++){
		printf("%d --> %d\n",i,find_number_of_x(i,n,arr));
	}
	
	printf("\nThe mode is %d.",find_mode(n,arr));
}



int find_mode(int n,int arr[]){
	int counter[10] = {0};
	int i;
	
	for(i = 0;i<n;i++){
		counter[arr[i]-1]++;
	}
	
	int max = 0;
	
	for(i = 0;i<10;i++){
		if(counter[i]>counter[max])
			max = i;
	}
	
	return max+1;
}


int find_number_of_x(int x,int n,int arr[]){
	
	int counter = 0;
	int i;

	for(i = 0;i<n;i++)
		if(arr[i] == x)
			counter++;
	
	return counter;
}

int find_max(int arr[10]){        
	int max = 0;
	int i;
	for(i = 0;i<10;i++){
		if(arr[i] > max)
			max = arr[i];
	}
}









