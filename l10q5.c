#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int l, c, i, j, x = 1;
	printf("Informe o número de linhas da matriz A: \n");
	scanf("%i", &l);
	printf("Informe o número de colunas da matriz A: \n");
	scanf("%i", &c);
	int A[l][c], B[l][c];
	printf("\n\n");
	
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			printf("Digite o %i° valor para ser armazenado na matriz A: \n", x++);
			scanf("%i", &A[i][j]);
		}
	}
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			B[i][j] = A[i][j]*3;
		}
	}
	printf("\n\n");
	printf("\nMatriz A\n");
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j ++){
			printf("%i  ", A[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz B\n");
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j ++){
			printf("%i  ", B[i][j]);
		}
		printf("\n");
	}
	return(0);
}