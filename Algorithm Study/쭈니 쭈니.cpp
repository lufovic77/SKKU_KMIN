#include <stdio.h>
#include <stdlib.h>

int main()
{
	int array[100];
	 
   int *numbers=array;
   int init_n, n, input;

   printf("the number of initial data : ");
   scanf("%d", &init_n);
   numbers = (int *)malloc(sizeof(int)*init_n);

   n = 0;
   while (1){

      int size=init_n;

      printf("input : ");
      scanf("%d", &input);

      if (input == -1)
         break;

      if (n == size){
         numbers = (int *)realloc(numbers, sizeof(int)*(size + init_n));
         size = size + init_n;
      }
      numbers[n] = input;
      n++;


   }

   for (int i = 0; i < n; i++)
      printf("%d ", numbers[i]);
   
   free(numbers);



}
