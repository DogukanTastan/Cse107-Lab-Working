#include <stdio.h>
#include <stdlib.h>
#define filename "TASK.txt"

struct Student{
	char *name;
	char *surname;
	int id;
	float gpa;
};typedef struct Student Student;

int main(){
	Student list[15];
	
	FILE *fptr;
	if((fptr = fopen(filename,"r")) == NULL){
		printf("Error!");
		exit(1);
	}
	
	int i;
	for(i = 0;i<15;i++){
		char name[20];
		char surname[20];
		int id;
		float gpa;
		fscanf(fptr,"%s",name);
		fscanf(fptr,"%s",surname);
		fscanf(fptr,"%d",&id);
		fscanf(fptr,"%f",&gpa);
		list[i].name = name;
		list[i].surname = surname,
		list[i].id = id;
		list[i].gpa = gpa;
	}
	
	int maxgpa_index = 0;
	int mingpa_index = 0;
	for(i = 0;i<15;i++){
		if(list[i].gpa > list[maxgpa_index].gpa)
			maxgpa_index = i;
		if(list[i].gpa < list[mingpa_index].gpa)
			mingpa_index = i;
	}
	
	printf("The student with highest gpa:\n");
	printf("%s %s %d %f\n\n",list[maxgpa_index].name,list[maxgpa_index].surname,list[maxgpa_index].id,list[maxgpa_index].gpa);
	printf("The student with lowest gpa:\n");
	printf("%s %s %d %f\n\n",list[mingpa_index].name,list[mingpa_index].surname,list[mingpa_index].id,list[mingpa_index].gpa);
	
}
