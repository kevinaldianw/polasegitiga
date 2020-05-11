/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int pola1(int bilanganPertama) 
{
   int i, j;
   
   for (i = 1; i <= 5; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", bilanganPertama);
         bilanganPertama++;
      }
      printf("\n");
   }
   return 0;
}

int pola2(int bilanganPertama)
{
    int i,j;
    
    /* Buat Matriks */
    int matriks[5][5] = {0};
    for (i = 0; i < 5; i++) {
      for (j = 0; j <= i; j++) {
         matriks[i][j] = bilanganPertama;
         bilanganPertama++;
      }
   }
   
   /* Transpose Matriks */
   int transpose[5][5];
   for (i = 0; i < 5; ++i)
        for (j = 0; j < 5; ++j) {
            transpose[j][i] = matriks[i][j];
        }    
        
    
    /* Cetak Pola */
    for (i = 0; i < 5; i++) {
      for (j = 0; j < 5; j++) {
        if(transpose[i][j]>0) printf("%d ",transpose[i][j]);
        else printf("   ");
      }
      printf("\n");
   }
}




int main()
{
   int bilanganPertama;    
   printf("Masukkan bilangan pertama: ");
   scanf("%d", &bilanganPertama);

   printf("Pola 1:\n");
   pola1(bilanganPertama);
   
   printf("\nPola 2:\n");
   pola2(bilanganPertama);
    
}



