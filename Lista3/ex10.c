#include <stdio.h>
#include <stdlib.h>

int main()
{
    int voto;
    int nulo = 0, branco = 0, total = 0;
    int vencedor = 0, id, empate;
    int candidato[4];

    do
    {
        printf("1 - Votar no candidato 1\n");
        printf("2 - Votar no candidato 2\n");
        printf("3 - Votar no candidato 3\n");
        printf("4 - Votar no candidato 4\n");
        printf("5 - Votar NULO\n");
        printf("6 - Votar em BRANCO\n");
        printf("0 - Encerrar a votacao e ver o resultado\n");
        printf("=========================================\n");
        printf("Digite seu voto: ");
        scanf("%d", &voto);
        printf("=========================================\n");

        switch (voto)
        {
        case 1:
            candidato[voto - 1]++;
            break;
        case 2:
            candidato[voto - 1]++;
            break;
        case 3:
            candidato[voto - 1]++;
            break;
        case 4:
            candidato[voto - 1]++;
            break;
        case 5:
            nulo++;
            break;
        case 6:
            branco++;
            break;
        default:
            break;
        }

    } while (voto != 0);

    for (int i = 0; i < 4; i++)
    {
        total += candidato[i];

        if (candidato[i] > vencedor)
        {
            vencedor = candidato[i];
            id = i + 1;
            empate = 0;
        }
        else if(candidato[i]==vencedor)
        {
            empate = 1;
        }
    }

    if (nulo + branco > total)
    {
        printf("Eleicao invalida: A soma dos votos nulos e brancos e maior que a dos votos validos.\n");
        exit(0);
    
    }
    if (empate == 1)
    {
        printf("Houve um empate entre os candidatos!\n");
        exit(0);
    }

    printf("Total de votos:\n");
    printf("Candidato 1: %d\n", candidato[0]);
    printf("Candidato 2: %d\n", candidato[1]);
    printf("Candidato 3: %d\n", candidato[2]);
    printf("Candidato 4: %d\n", candidato[3]);
    printf("Nulos: %d\n", nulo);
    printf("Brancos: %d\n", branco);
    printf("\nO vencedor com %d votos é o candidato %d\n", vencedor, id);
}

/*10 - Em uma eleição presidencial, existem quatro candidatos. Os votos são informados através
de código. Os dados utilizados para a escrutinagem obedecem à seguinte codificação:
- 1, 2, 3 e 4 = voto para os respectivos candidatos;
- 5 voto nulo;
- 6 voto em branco;*/