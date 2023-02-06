#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct sNo{
    char info;
    struct sNo*prox;
}NO;

void iniciar(NO** lista){
    *lista = NULL;
}

NO* alocarNO(){
    return (NO*) malloc(sizeof(NO));
}

void desalocarNO(NO* q){
    free(q);
}

int listavazia(NO* lista){
    if(lista == NULL)
        return 1;
    else
        return 0;
}
void inserirnoInicio(NO**lista, char elem){
    NO *novo;
    novo = alocarNO();
        if(novo!=NULL){
            novo->info=elem;
            if(listavazia(*lista)){
                novo->prox=novo;
            }
            else{
            (*lista)->prox=novo;
            novo->prox=*lista;
            }
            *lista=novo;
            }
            else{
                printf("ERRO: falha na aloca��o do no\n");
                exit(1);
            }
    }


void removerfinal(NO**lista, char elem){
    NO*aux=(*lista);
    if(!listavazia(*lista)){
        if((*lista)==(*lista)->prox){
            desalocarNO(*lista);
            *lista=NULL;
        }else{
                while((*lista)->prox!=aux);{
                *lista=(*lista)->prox;
                (*lista)->prox=aux->prox;
                desalocarNO(aux);
                }
            }
        }
    }

void exibirvogais(NO** lista){
    NO* aux;
    char info;
    aux=(*lista)->prox;
        do{
            if(aux->info=='a' || aux->info=='A' || aux->info=='e' || aux->info=='E' && aux->info=='i' || aux->info=='I' || aux->info=='o' || aux->info=='O' || aux->info=='u' || aux->info=='U');

         aux=aux->prox;
    }while(aux->prox!=*lista);
    printf("As vogais da lista sao: %c\n", aux->info);
}



void Menu()
{
    printf("\n [1]- Inserir elemento no inicio\n");
    printf("\n [2]- Remover elemento do final\n");
    printf("\n [3]- Exibir elementos que forem vogais\n");
    printf("\n [0]- Sair\n");
}
