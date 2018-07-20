#include <stdio.h>
#include <stdlib.h>
#define MAX 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int i, v1[MAX], v2[MAX], v3[MAX];

   for(i=0; i<4; i++)

   {
   printf("digite a sequencia de numeros do v1: ");
   scanf("%d", &v1[i]);}
   
   for (i=0; i<4; i++)
   
   {
   printf("digite a sequencia de numeros do v2: ");
   scanf("%d", &v2[i]);}
   
   printf("valor do v1: ");
   for (i=0; i<4; i++)
   {
   v3[i]=v1[i];
   v1[i]=v2[i];
   
   printf("%d, ",v1[i]);
   }
   
   printf("valor do v2: ");
   for (i=0; i<4; i++)
   {
   v2[i]=v3[i];
   
   printf("%d, ",v2[i]);
   }
   
   

   
	return 0;
}
