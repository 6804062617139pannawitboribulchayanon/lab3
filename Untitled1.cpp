#include <stdio.h>
int main()
{
 int score;
 scanf("%d",&score);
 if (score >= 68) {
 	if (score >=80)
 	   printf("A");
 	else if (score >= 75)
 	   printf("B");
 	else
	    printf("C");
    }else{
    	if (score >=60)
    	   printf("D");
       else
	     printf("F");	
   }
}
