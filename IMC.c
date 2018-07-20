#include <stdio.h>
#include <stdlib.h>
#define MAX 2

//Calcular o IMC de 10 pessoas (peso/altura);
//exibir uma lista de indice de pessoas e de imc de todos as pessoas;
//exibir quantos estão em cada categoria do IMC;
//identificar quem tem o IMC mais alto e mais baixo;
//a média dos IMCs;
//definir o maior peso e altura e o menor peso e altura;

int main(int argc, char *argv[]) {
	int i, cat17, cat18, cat24, cat29, cat34, cat39, cat40;
	float vpeso[MAX], valt[MAX], vimc[MAX];
	
	cat17=0;
	cat18=0;
	cat24=0;
	cat29=0;
	cat34=0;
	cat39=0;
	cat40=0;
	
//recolher as informações e calcular o IMC	

	for (i=0; i<MAX; i++){
		printf("digite as informações da pessoa %d \n ",i+1);
		printf("peso: ");
		scanf("%f", &vpeso[i]);
		printf("altura: ");
		scanf("%f", &valt[i]);
		vimc[i] = (vpeso[i] / (valt[i] * valt[i]));
		printf ("IMC= %f \n", vimc[i]);
	}
		
//verificar a categoria de cada individuo

	for (i=0; i<MAX; i++){
		
		if(vimc[i] < 17);{
		cat17++;
		
		} if else(vimc[i]>=17 && vimc[i]<=18.49){
			cat18++;
		} else if(vimc[i]>=18.5 && vimc[i]<=24.99){
			cat24++;
		} else if(vimc[i]>=25 && vimc[i]<=29.99){
			cat29++;
		} else if(vimc[i]>=30 && vimc[i]<=34.99){
			cat34++;
		} else if(vimc[i]>=35 && vimc[i]<=39.99){
			cat39++;
		} else{
			cat40++;
		}
}
		
//imprimir as categorias

	printf("\n Resultado das categorias de IMC por grupo: \n");
	printf("%d Estão muito abaixo do peso \n",cat17);
	printf("%d estao abaixo do peso \n",cat18);
	printf("%d estão com o peso normal \n",cat24);
	printf("%d estão acima do peso \n",cat29);
	printf("%d estão com obesidade 1 \n", cat34);
	printf("%d estão com obesidade 2 \n", cat39);
	printf("%d estão com obesidade 3 \n", cat40);
	
		
		
	
	return 0;
}
