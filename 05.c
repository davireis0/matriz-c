#include <stdio.h>

int num, a[15];
int x;

main (){
	printf ("Digite um número para a tabuada: \n");
	scanf ("%d",&num);
	
	for (x = 1 ; x <= 10 ; x++){
		a[x] = num * x;
	}
	
	for(x = 1 ; x <= 10 ; x++){
		printf ("%d X %d = %d\n",num,x,a[x]);
	}
}