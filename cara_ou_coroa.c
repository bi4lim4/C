#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//mostra quem ganhou o jogo, o usuario ou o computador
void resultado (int pjogador, int pcomp);

int main (void) {

	srand(time(NULL)); //gera numeros aleatorios diferentes
	
	int cara = 0;
	int coroa = 1;
	
	printf("\n\n\t\t\t-----------------------------------\n");
	printf("\t\t\t\tJOGO DO CARA OU COROA\n");
	printf("\t\t\t-----------------------------------\n");
	int numeroRodadas;
	printf("\nPor quantas rodadas deseja jogar?: ");
	scanf("%d", &numeroRodadas);
	
	int palpite;
	int pontosJogador=0;
	int pontosComputador=0;
	int i;
	
	//inicio do jogo
	for(i=0; i<numeroRodadas; i++){
		printf("\nDigite o seu palpite: \nCara = 0 \nCoroa = 1\n");
		scanf ("%d", &palpite);
		
		if(palpite != 0 && palpite !=1){
			printf("\nOpcao invalida!!");
			printf("\nTente novamente (1, para Coroa e 0 para Cara): ");
			scanf ("%d", &palpite);	
		} if(palpite == 0 || palpite == 1){
			int ladoSorteado = rand()%2;
		
			printf("\nNumero sorteado: %d", ladoSorteado);
			if(ladoSorteado == palpite) {
				printf("\n\t\t\t\t------------------------\n");
				printf("\t\t\t\tParabens! Voce acertou");
				printf("\n\t\t\t\t------------------------");
				pontosJogador++;
			} else if (ladoSorteado != palpite) {
				printf("\n\t\t\t\t------------------------\n");
				printf("\t\t\t\t\tVoce Errou!");
				printf("\n\t\t\t\t------------------------");
				pontosComputador++;
		}
		printf("\n");
			
		}	
	}
	
	system("cls");

	printf("\nPontos do jogador: %d", pontosJogador);
	printf("\nPontos do Computador: %d", pontosComputador);

	resultado(pontosJogador, pontosComputador);
	
return 0;
}

void resultado (int pjogador, int pcomp){
	if (pjogador> pcomp){
		printf("\n\t\t\t\t-------------------------------\n");
		printf("\t\t\t\tPARABENS! VOCE GANHOU O JOGO!!");
		printf("\n\t\t\t\t-------------------------------\n");
	} else if (pcomp> pjogador){
		printf("\n\t\t\t\t----------------------------------------------\n");
		printf("\t\t\t\tO COMPUTADOR GANHOU! MAIS SORTE DA PROXIMA VEZ");
		printf("\n\t\t\t\t----------------------------------------------\n");
	}else{
		printf("\n\t\t\t\t------------------------\n");
		printf ("\t\t\t\t\tEMPATE!");
		printf("\n\t\t\t\t------------------------\n");
	}
}

