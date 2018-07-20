#include <stdio.h>
#include <stdlib.h>
#define MAX 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int i, v1[MAX], v2[MAX], aux, p;

aux = 0;
   printf("digite os numeros: ");
   scanf("%d", &p);
   
   for(i=0; i<p; i++)

   {
   printf("digite a sequencia de numeros do v1: ");
   scanf("%d", &v1[i]);}
   
   for (i=0; i<p; i++)
   
   {
   printf("digite a sequencia de numeros do v2: ");
   scanf("%d", &v2[i]);}
   
   for(i=0; i<p; i++)
      {
   		if(v1[i]==v2[i]){
   		aux=aux+1;}
   }
    
   if(aux==p)
   {
   printf("todos os numeros sao iguais");
   }
   
   else if(aux<(p/2))
   {
   	printf("menos da metade sao iguais");
   }
   
   else{
   	printf("mais da metade sao iguais");
   }
 
 return 0;  
}
   
   
