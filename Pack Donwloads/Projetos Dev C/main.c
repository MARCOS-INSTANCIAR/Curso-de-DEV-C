#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,x;
	printf("informe um numero, de 0 a 9:\t");
	scanf("%d",&x);
	for(i = x; i <=9; i++){
		printf("VAMOS VOLTAR INSTANCIAR!%d...\n",i);
	}
	
	return 0;
}

