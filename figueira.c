#include "figueira.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

//convert all lower case letters to upper case 
void lowerToUpper (char** a) 
{
  int i =0 ;  
  int j =0; 
  for (i = 0; a[i]!= NULL; i++)
    {
    for (j=0; a[i][j] != '\0'; j++) 
      {
	if (a[i][j] > 96 &&  a[i][j] < 127)
        a[i][j] = a[i][j]-32; 
      }
   }
}

//reverse the characters on each line 
// void charReverse (char** a) 
/* {
   int i; 
   int j; 
   
   for (i=0; a[i] != NULL; i++)
   {
     int end = strlen(a[i])-1; 
   for (j=0;i < end ;j++)
       {
	 char temp = end; 
	 end = i;
	 i = temp;
	 i++; 
	 j--; 
       }
   }
 }
*/
