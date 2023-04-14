#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct pedido
{
    int codigo;
    char nome[50], pedido[50];
    char endereco[100];
    float valor;
};

int main()
{
    system("cls");
    struct pedido pedidos[100];
    int codigoPedido, codigoConsulta, opcao;

    codigoPedido = 1;

    printf("----------BEM VINDO----------\n");
    while (opcao != 4)
    {
        printf("Escolha uma das seguintes opcoes:\n\n");

        printf("1 - Cadastrar Pedido\n");
        printf("2 - Consultar Pedido\n");
        printf("3 - Emitir Relatorio de pedidos\n");
        printf("4 - Sair\n");

        scanf("%d", &opcao);
        fflush(stdin);

        system("cls");
        if (opcao == 1)
        {
            printf("*Voce escolheu a opcao de cadastro de pedido*\n\n");

            pedidos[codigoPedido].codigo = codigoPedido;

            printf("Informe o nome do cliente:\n");
            fgets(pedidos[codigoPedido].nome, 49, stdin);
            fflush(stdin);

            printf("Informe o que foi pedido:\n");
            fgets(pedidos[codigoPedido].pedido, 49, stdin);
            fflush(stdin);

            printf("Informe o endereco do pedido:\n");
            fgets(pedidos[codigoPedido].endereco, 99, stdin);
            fflush(stdin);

            printf("Informe o valor do pedido:\n");
            scanf("%f", &pedidos[codigoPedido].valor);
            fflush(stdin);

            system("cls");

            printf("Resumo do pedido:\n\n");
            printf("NOME: %s", pedidos[codigoPedido].nome);
            printf("PEDIDO: %s", pedidos[codigoPedido].pedido);
            printf("ENDERECO: %s", pedidos[codigoPedido].endereco);
            printf("VALOR: %f\n\n", pedidos[codigoPedido].valor);

            codigoPedido++;

            system("pause");
            system("cls");
        }
        else if (opcao == 2)
        {
            printf("*Voce escolheu a opcao de consulta de pedido*\n\n");
            opcao = 0;

            while (opcao != 2)
            {
                printf("Agora, informe o numero do pedido:\n");
                scanf("%d", &codigoConsulta);
                fflush(stdin);

                system("cls");
                if (strlen(pedidos[codigoConsulta].nome) > 0)
                {
                    printf("Consulta do pedido:\n\n");
                    printf("NUMERO DO PEDIDO: %d\n", pedidos[codigoConsulta].codigo);
                    printf("NOME: %s", pedidos[codigoConsulta].nome);
                    printf("PEDIDO: %s", pedidos[codigoConsulta].pedido);
                    printf("ENDERECO: %s", pedidos[codigoConsulta].endereco);
                    printf("VALOR: %f\n\n", pedidos[codigoConsulta].valor);
                }
                else
                {
                    printf("Pedido inexistente\n\n");
                }

                system("pause");
                system("cls");
                printf("1 - Fazer outra consulta\n");
                printf("2 - Encerrar consulta\n");
                scanf("%d", &opcao);
                fflush(stdin);
                system("cls");
            }
        }
        else if (opcao == 3)
        {
            printf("*Voce escolheu a opcao de relatorio dos pedidos*\n\n");
            system("pause");
            printf("\n");
            for (int i = 1; i < 101; i++)
            {
                if (pedidos[i].codigo < 101 && pedidos[i].codigo > 0 && strlen(pedidos[i].pedido) > 2)
                {
                    printf("NUMERO DO PEDIDO: %d\n", pedidos[i].codigo);
                    printf("NOME: %s", pedidos[i].nome);
                    printf("PEDIDO: %s", pedidos[i].pedido);
                    printf("ENDERECO: %s", pedidos[i].endereco);
                    printf("VALOR: %f\n\n", pedidos[i].valor);
                }
            }
            system("pause");
            system("cls");
        }
    }

    return 0;
}