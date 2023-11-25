#ifndef TCIRCULAR_LIST_H
#define TCIRCULAR_LIST_H
#include <stdbool.h>

typedef struct list_ TCircList;

TCircList *TCircList_create();
bool TCircList_insert(TCircList*, int);
void TCircList_print(TCircList*);
void Delete_Edmundo(TCircList*,int,int);
#endif