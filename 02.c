#include <stdio.h>

int a[20], b[20];
int x;
main (){
	for (x = 1 ; x <= 20 ; x++){
		printf ("Digite um número: \n");
		scanf("%d",&a[x]);
	}
	
	for (x = 1 ; x <= 20 ; x++){
		b[x] = a[x] * 3;
	}
	
	for (x = 1 ; x <= 20 ; x++){
		printf ("Matriz B: %d \n",b[x]);
	}
}