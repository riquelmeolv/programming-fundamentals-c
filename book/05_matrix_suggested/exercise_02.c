#include<stdio.h>
#include<stdlib.h>

int main()
{
   int numbers[2][4];
   for(int i = 0; i < 2; i++)
   {
       for(int j = 0; j < 4; j++)
       {
           printf("Numero %d: ", i + 1);
           scanf("%d", &numbers[i][j]);
       }
   }
   
   int cont_row = 0, sum = 0, cont = 0;
   for(int i = 0; i < 2; i++)
   {
       for(int j = 0; j < 4; j++)
       {
           if(numbers[i][j] % 2 == 0)
           {
               sum += numbers[i][j];
               cont++;
           }
           
           if(numbers[i][j] >= 12 && numbers[i][j] <= 20)
           {
               cont_row++;
           }
       }
   }
   int media; 
   media = sum / cont;
   
   printf("A média dos elementos pares foi: %d\n", media);
   printf("A quantidade de números entre 12 e 20: %d\n", cont_row);
   return 0;
}