#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int A[2][3], B[2][3], l, c, x = 1;
	for(l = 0; l < 2; l++){
		for(c=0; c < 3; c++){
			printf("Digite o %i° valor para armazenar na matriz A: \n", x++);
			scanf("%i", &A[l][c]);
		}
	}
	printf("\n\n");
	x = 1;
	for(l = 0; l < 2; l++){
		for(c=0; c < 3; c++){
			printf("Digite o %i° valor para armazenar na matriz B: \n", x++);
			scanf("%i", &B[l][c]);
		}
	}
	printf("\n\n");
	printf("\nMatriz A\n");
	for(l = 0; l < 2; l++){
		for(c=0; c < 3; c++){
			printf("%i  ", A[l][c]);
		}
		printf("\n");
	}
	printf("\nMatriz B\n");
	for(l = 0; l < 2; l++){
		for(c=0; c < 3; c++){
			printf("%i  ", B[l][c]);
		}
		printf("\n");
	}
	return(0);
}