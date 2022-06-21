#include <stdio.h>

int x;
int a[20], b[20], ant[20];

main(){
	for(x = 1 ; x <= 20 ; x++){
		printf ("Digite números para a matriz A: \n");
		scanf ("%d",&a[x]);
	}
	
	for(x = 1 ; x <= 20 ; x++){
		printf ("Digite números para a matriz B: \n");
		scanf ("%d",&b[x]);
	}
	
	for(x = 20 ; x >= 1 ; x--){
		ant[x] = b[x];
		b[x] = a[x];
		a[x] = ant[x];
	}
	
	for (x = 1 ; x <= 20 ; x++ ){
	printf ("Matriz A = %d \n",a[x]);
		
	}
	
	for (x = 1 ; x <= 20 ; x++ ){
	printf ("Matriz B = %d \n",b[x]);		
	}
	
	
}