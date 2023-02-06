#include<stdlib.h>
#include<stdio.h>
#include "BBT_LCSE.c"
int main (void){
    NO* ptrLista;
    int opcao;
    char elem;
    iniciar(&ptrLista);

    do{
        printf("Escolha uma opcao valida:\n");
        printf("1- Inserir elemento no inicio.\n");
        printf("2- Remover do final da lista.\n");
        printf("3- Exibir os elementos que forem vogais.\n");
        printf("4- Sair.\n");
        scanf("%d", &opcao);
        fflush(stdin);

        switch(opcao){
            case 1:printf("Digite um caracter:\n");
                    scanf("%c", &elem);
                    inserirnoInicio(&ptrLista, elem);
                break;

            case 2:removerfinal(&ptrLista,elem);
                printf("Elementos removidos com sucesso...\n");
                break;

            case 3:printf("Exibindo elementos...\n");
                    exibirvogais(&ptrLista);
                break;

            default: printf("Opcao invalida.\n");
            break;
    }
}while(opcao !=5);
    return 0;
}
