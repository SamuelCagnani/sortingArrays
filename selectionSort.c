#include <stdio.h>

int main()
{

  int num[5] = {1,8,5,3,9}; 
  int tam = 5; 
  
  int i, j, min, swap; 
  for (i = 0; i < (tam-1); i++)
   { 
    min = i; 
    for (j = (i+1); j < tam; j++) { 
      if(num[j] > num[min]) { 
        min = j; 
      } 
    } 
    if (i != min) { 
      swap = num[i]; 
      num[i] = num[min]; 
      num[min] = swap; 
    } 
  } 

//i = 0 -> 1;
//min = 0 -> 1 -> 4;
//j = 1 -> 2 -> 3 -> 4;
//tam = 5;
//swap = 3;
   
}
