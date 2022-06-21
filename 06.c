#include <stdio.h>

int a[5], b[5], c[5], d[15];
int x;

main(){
	for (x = 0 ; x<= 4 ; x++){
		printf ("Digite um número: \n");
		scanf ("%d",&a[x]);
	}
	for (x = 0 ; x<= 4 ; x++){
		printf ("Digite um número: \n");
		scanf ("%d",&b[x]);
	}
	for (x = 0 ; x<= 4 ; x++){
		printf ("Digite um número: \n");
		scanf ("%d",&c[x]);
	}
	
	
	for (x = 0 ; x <= 4 ; x++){
		d[x] = a[x];
	}
	int f = 0;
	for (x = 5 ; x <= 9 ; x++){
		d[x] = b[f];
		f++;
	}
	int p = 0;
	for (x =  10 ; x <= 14 ; x++){
		d[x] = c[p];
		p++;
	}
	
	for (x = 0 ; x <= 14 ; x++){
		printf ("Matriz D: %d \n",d[x]);
	}
}