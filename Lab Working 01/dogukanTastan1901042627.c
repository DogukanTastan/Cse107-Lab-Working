#include <stdio.h>
#include <stdlib.h>


int main() {
	float w,h,c;
	
	printf("Please write weight(kg) ");
	scanf("%f",&w);
	printf("Please write height(m) ");
	scanf("%f",&h);
	
	c=w/(h*h);
	
	if(c<18.5){
		printf("Underweight");
	}
	
    else if(24.9>c && c>18.5){
    	printf("Healthy Weight");
    	
	}
	 else if(29.9>c && c>25){
    	printf("Overweight");
    	
	}
	 else if(34.9>c && c>30){
    	printf("obese(Class1)");
    	
	}
	else if(39.9>c && c>35){
    	printf("Severely Obese(Class 2)");
    	
	}
	
	else if(49.9>c && c>40){
    	printf("Morbidly Obese(Class3)");
    	
	}
	
		else if(c>50){
    	printf("Super Obese(Class4)");
    	
    }
}
