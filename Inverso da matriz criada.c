#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int l, c, x = 1, A[3][3];
	//Usuário cria a matriz
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++){
			printf("Digite o %i° valor inteiro: \n", x++);
			scanf("%i", &A[l][c]);
		}
	}
	//Exibição de uma matriz com os valores invertidos
	printf("\nMatriz invertida\n");
	for(l = 2; l >= 0; l--){
		for(c = 2; c >= 0; c--){
			printf("%i  ", A[l][c]);
		}
		printf("\n");
	}
	return(0);
}
