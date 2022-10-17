// TRABALHO DE: LUCCAS ANDRE DE SOUZA MELIM
// RGM: 1729755824
// CIÊNCIA DA COMPUTAÇÃO/ MANHA/ 2ºSEMESTRE

#include <stdio.h>

// definir os nomes dos candidatos
#define C1 "Julinho da 12"
#define C2 "Serginho"
#define C3 "Kothenks"
#define C4 "Juresvalda"
#define NULO "nulo"
#define BRANCO "branco"

// definir variaveis que irao receber os valores da votação
int c1=0, c2=0, c3=0, c4=0, vn=0, vb=0;
void main()
{
    // fazer variaveis para reset/funcionamento do programa
    int votantes;
    int a;
    // printar na tela o que aparecerá para o usuario
    printf("\n============Bem-Vindo! Inicie as votações!============\n");
    printf("\n============Digite quantas pessoas irao votar: ============\n\n");
    // identificar o que ira atribuir o valor
    scanf("%d",&votantes);

    // fazer um "for" para quando declarar quantas pessoas irao votar, ele parar logo em seguida de acabar os votantes
    for (a = 0; a < votantes; a++)
        {
        //variavel declarada para ser usada no switch, ver quem a pessoa escolhe para votar
        int votador;
        //imprime o nome de cada candidato e pede para que seja feito a escolha entre o numero de 1 a 6
        printf("\n VOTE! \n\n");
        printf("\n 1. %s", C1);
        printf("\n 2. %s", C2);
        printf("\n 3. %s", C3);
        printf("\n 4. %s", C4);
        printf("\n 5. %s", NULO);
        printf("\n 6. %s", BRANCO);
        printf("\n\n Escolha um dos canditados e vote entre (1 - 6) : ");

        //recebe o valor que o usuario digitou para quem ele irá votar.
        scanf("%d",&votador);

        switch (votador){

            case 1:
                c1++;
                break;

            case 2:
                c2++;
                break;

            case 3:
                c3++;
                break;

            case 4:
                c4++;
                break;

            case 5:
                vn++;
                break;

            case 6:
                vb++;
                break;

            default:
                printf("\n Opção inválida!");
                break;

      }
}

    // criar variaveis de porcentagem
    float totalDeVotos, voto1Porcento=0, voto2Porcento=0, voto3Porcento=0, voto4Porcento=0, voto5Porcento=0, voto6Porcento=0;
    totalDeVotos = c1+c2+c3+c4+vn+vb;
    voto1Porcento = (c1/totalDeVotos) * 100;
    voto2Porcento = (c2/totalDeVotos) * 100;
    voto3Porcento = (c3/totalDeVotos) * 100;
    voto4Porcento = (c4/totalDeVotos) * 100;
    voto5Porcento = (vn/totalDeVotos) * 100;
    voto6Porcento = (vb/totalDeVotos) * 100;

    // imprimir as informações com os valores em porcentagem
    printf("\n\n====================================================================================\n");
    printf("\n %s com %d voto(s) = %.1f %%", C1, c1, voto1Porcento);
    printf("\n %s com %d voto(s) = %.1f %%", C2, c2, voto2Porcento);
    printf("\n %s com %d voto(s) = %.1f %%", C3, c3, voto3Porcento);
    printf("\n %s com %d voto(s) = %.1f %%", C4, c4, voto4Porcento);
    printf("\n %s com %d voto(s) = %.1f %%", "Votaram Nulo", vn, voto5Porcento);
    printf("\n %s com %d voto(s) = %.1f %%", "Votaram Branco", vb, voto6Porcento);
    printf("\n\n====================================================================================\n");
}
