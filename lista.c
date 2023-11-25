#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct no{
  int info;
  struct no *next;
}TNo;

struct list_ {
  TNo* inicio;
};

TCircList *TCircList_create(){
  TCircList *nova = (TCircList*)malloc(sizeof(TCircList));
  if(nova!=NULL)
    nova->inicio = NULL;
  return nova;
}

bool TCircList_insert(TCircList *lista, int info){
  //inserção no fim
  TNo* novo = malloc(sizeof(TNo));
  if(novo==NULL)   
    return false;
  
  novo->info=info;
  if(lista->inicio==NULL)
    lista->inicio=novo;
  else{
    TNo* aux = lista->inicio;
    while(aux->next!=lista->inicio)
      aux=aux->next;
    aux->next=novo;
  }
  novo->next=lista->inicio;
  return true; 
}

void TCircList_print(TCircList *lista){
  if (lista == NULL || lista->inicio == NULL)
    return;
  // Impressão da lista enc. comum
  TNo *aux = lista->inicio;
  //printf("Inicio: %p\n", lista->inicio);
  do {
    //printf("(%i, %p)\n", aux->info, aux->next);
    printf("%i ", aux->info);
    aux = aux->next;
  } while (aux != lista->inicio);
putchar('\n');
}

/*bool TCircList_delete(TCircList* lista, int intervalo, int qtd) {
  if (lista->inicio == NULL) 
    return 0;

  TNo* atual = lista->inicio;
  TNo* aux = NULL;
  int contador = 0;
  int cont = qtd;
  do{
    for(int i=0;i<intervalo-1;i++){
      atual=atual->next;
  }
    aux = atual->next;
    atual->next = atual->next->next;
    atual = 
    free(aux);
    cont--;
    TCircList_print(lista);
  }while(cont!=0);
  
  return 1;
}*/
void Delete_Edmundo(TCircList* lista, int intervalo, int qtd) {
    TNo *ptr1 = lista->inicio, *ptr2 = lista->inicio;
    while (qtd > 1) {
        for (int i = 0; i < intervalo; i++) {
            ptr2 = ptr1;
            ptr1 = ptr1->next;
        }
        if(ptr1==lista->inicio){
          lista->inicio = ptr1->next;
         // printf("oioi");
         // printf("%d",ptr1->next->info);
        }
        ptr2->next = ptr1->next;
        
        //printf("Eliminado: %d\n", ptr1->info);
        free(ptr1);
        ptr1 = ptr2->next;

        //TCircList_print(lista);

        qtd--;
    }
    //printf("%d",lista->inicio->info);
    
}