#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[5][50];
	float notas[5][3], media[5], m = 0;
	int l, c, x = 1;
	for(l = 0; l < 5; l++){
	printf("Informe o nome do %i� aluno:  \n", x++);
	gets(nome[l]);
	}
	printf("\n-----------------------------------\n");
	for(l = 0; l < 5; l++){
		printf("Digite as tr�s notas de %s\n", nome[l]);
		m = 0;
		for(c = 0; c < 3; c++){
			printf("%i�: ", c + 1);
			scanf("%f", &notas[l][c]);
			m += notas[l][c];
		}
		media[l] = m / 3;
		printf("\n");
	}
	printf("\n\n----------------------------------\n\n*** Lista de alunos e m�dias***\n\n");
	for(l = 0; l < 5; l++){
		printf("%i�: %s, voc� obteve m�dia %.1f. \n", l + 1, nome[l], media[l]);
	}
	return(0);
}