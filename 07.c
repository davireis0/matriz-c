#include <stdio.h>

float a[20];
int x;
float maior, media, soma, menor;
main(){
	for (x = 1 ; x <= 5 ; x++){
		printf ("Digite uma temperatura: \n");
		scanf ("%f",&a[x]);
		if (x == 1 ){
			maior = a[x];
		}
		if (a[x] > maior){
			maior = a[x];
		}
		if (x == 1 ){
			menor = a[x];
		}
		if (a[x] < menor){
			menor = a[x];
		}
		
	}
	
	for (x = 1 ; x<= 5 ; x++){
		soma += a[x];
	}
	
	media = soma / 20;
	
	for (x = 1 ; x <= 5 ; x++){
		printf ("Média = %.1f \n",media);
	}
	
	for (x = 1 ; x <= 5 ; x++){
		printf ("Maior = %.1f \n",maior);
	}
	
	for (x = 1 ; x <= 5 ; x++){
		printf ("Menor = %1.f \n",menor);
	}
	
}