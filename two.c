#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "readLine.h"
#include "execCmds.h"


void sortCmp (char** a)
{
  int i;
  int j = 0;
  int change;
  int size = 0;
  while (a[size] != NULL)
    {
      size++;
    }
  
  do{
   change = 0;
    for(i = 0; i < size - 1; i++){
      if(strcmp(a[i],a[i+1]) > 0){
	char* temp = a[i+1];
	a[i+1] = a[i];
	a[i] = temp;
	change = 1;
      }
    }
  }while(change != 0);
  return;
}

void sortLen (char** a)
{
  int i;
  int j = 0;
  int change;
  int size = 0;
  int len1;
  int len2;
  while (a[size] != NULL)
    {
      size++;
    }

  do{
    change = 0;

    for(i = 0; i < size - 1; i++){
      len1 = 0;
      len2 = 0;
      while (a[i][len1] != '\0')
	{
	  len1++;
	}
      while (a[i+1][len2] != '\0')
	{
	  len2++;
	}
      if(len1 > len2){
	char* temp = a[i+1];
	a[i+1] = a[i];
	a[i] = temp;
	change = 1;
      }
    }
  }while(change != 0);
  return;
}
