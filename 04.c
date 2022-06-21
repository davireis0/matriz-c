#include <stdio.h>

float a[10], b[10];
int x;
main (){
	for (x = 1 ; x <= 2 ; x++){
		printf ("Digite um número: \n");
		scanf("%f",&a[x]);
	}
	
	for (x = 1 ; x <= 2 ; x++){
		b[x] = a[x] / (2.0);
	}
	
	for (x = 1 ; x <= 2 ; x++){
		printf ("Matriz B: %.1f \n",b[x]);
	}
}