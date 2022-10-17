#include <stdio.h>

int main(){
  int i = 0, voto = 0, eleitores = 0;
  int nulo = 0, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, branco = 0;

  printf("Escreva a quantidade de eleitores: ");
  scanf("%d", &eleitores);
  printf("Há 6 opções de voto: \n0 - Nulo \n1 - Candidato n°1 \n2 - Candidato n°2 \n3 - Candidato n°3 \n4 - Candidato n°4 \n5 - Branco \n\n");



 for(i = 0; i < eleitores; i++){
  printf("Digite o voto n°%d:", i+1);
  scanf("%d", &voto);
    switch(voto){
      case 0:
        nulo += 1;
        continue;
      case 1:
        candidato1 += 1;
        continue;
      case 2:
        candidato2 += 1;
        continue;
      case 3: 
        candidato3 += 1;
        continue;
      case 4:
        candidato4 += 1;
        continue;
      case 5:
        branco += 1;
        continue;
    }
  }

  printf("\n\nForam contabilizados %d eleitores: \n %d %% votaram no Nulo, sendo %d votos.\n %d %% votaram no Candidato 1, sendo %d votos.\n %d %% votaram no Candidato 2, sendo %d votos.\n %d %% votaram no Candidato 3, sendo %d votos.\n %d %% votaram no Candidato 4, sendo %d votos.\n %d %% votaram no Branco, sendo %d votos.", eleitores, (nulo*100/eleitores), nulo, (candidato1*100/eleitores), candidato1, (candidato2*100/eleitores), candidato2, (candidato3*100/eleitores), candidato3, (candidato4*100/eleitores), candidato4, (branco*100/eleitores), branco);

  return 0;
}
