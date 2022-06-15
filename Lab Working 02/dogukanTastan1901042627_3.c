# include <stdio.h>   

 main()   
{   
 
 int i, sayi, toplam = 0 ;   
  
	printf("Please enter number \n") ;   
	 scanf("%d", &sayi) ;   
 
		 for(i = 1 ; i < sayi ; i++)   
 		{   
   		
		   if(sayi % i == 0)   
   	  	toplam = toplam + i ;   
 		}    

	 if (toplam == sayi)   
    printf("%d is Perfect Number", sayi) ;   
	
	 else   
    printf("%d is not Perfect Number", sayi) ;   




return 0 ;   
}
