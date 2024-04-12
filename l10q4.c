#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float A[4][2], B[4][2];
	int l, c, x = 1;
	for(l = 0; l < 4; l++){
		for(c=0; c < 2; c++){
			printf("Digite o %i° valor para armazenar na matriz A: \n", x++);
			scanf("%f", &A[l][c]);
		}
	}
	for(l = 0; l < 4; l++){
		for(c = 0; c < 2; c++){
			B[3 - l][1 - c] = A[l][c];
		}
	}
	printf("\n\n");
	printf("\nMatriz A\n");
	for(l = 0; l < 4; l++){
		for(c=0; c < 2; c++){
			printf("%.1f  ", A[l][c]);
		}
		printf("\n");
	}
	printf("\nMatriz B\n");
	for(l = 0; l < 4; l++){
		for(c=0; c < 2; c++){
			printf("%.1f  ", B[l][c]);
		}
		printf("\n");
	}
	return(0);
}