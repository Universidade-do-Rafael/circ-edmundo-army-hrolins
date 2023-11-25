#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/*int main(void) {
  TCircList *clist = TCircList_create();
  int qnt,intervalo;

  scanf("%d",&qnt);
  for(int i=1;i<=qnt;i++)
    TCircList_insert(clist,i);
  TCircList_print(clist);

  scanf("%d",&intervalo);
  TCircList_delete(clist,intervalo,qnt);

  //TCircList_print(clist);
    
  
  
  return 0;
}*/
int main(void) {
    int N, M;
    scanf("%d %d", &N, &M);

    TCircList* clist = TCircList_create();
    for (int i = 1; i <= N; i++) {
        TCircList_insert(clist, i);
    }

    Delete_Edmundo(clist, M, N);
    TCircList_print(clist);
    return 0;
}