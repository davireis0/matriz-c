#include <stdio.h>

int a[10], b[10];
int x;
main (){
	for (x = 1 ; x <= 10 ; x++){
		printf ("Digite um número: \n");
		scanf("%d",&a[x]);
	}
	
	for (x = 1 ; x <= 10 ; x++){
		b[x] = a[x] * (-1);
	}
	
	for (x = 1 ; x <= 10 ; x++){
		printf ("Matriz B: %d \n",b[x]);
	}
}