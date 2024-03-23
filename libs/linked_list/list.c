/* CORPO DELLE FUNZIONI */

#include "../item/item.h"
#include <stdio.h>
#include <stdlib.h>

/*

SINTATTICA DELLA LISTA:
Tipo lista : nodeList
Tipi di riferimento lista : item, boolean

Operatori su lista :
*/

// struttura di ogni nodo della lista
struct nodeList {
  item value;
  struct nodeList *next;
};

// costituzione del tipo lista
typedef struct nodeList *list;

// creazione di una lista vuota
list newEmptyList() { return NULL; }

// acquisizione dimensione lista
int get_ListSize(list lst) {
  int size = 0;
  list p_current = lst; // testa

  // ciclo per scorrere la lista
  while (p_current != NULL) {
    p_current = p_current->next; // nodo succssivo
    size++;
  }
  return size;
}

// controllo se la lista è vuota
int isEmpty(list lst) {
  int flag_empty = 0;
  if (!lst)
    flag_empty = 1;

  return flag_empty;
}

// acquisizione del nodo testa della lista
struct nodeList getNode_Head(list lst) {
  return *lst;
}

// acquisizione del nodo coda della lista
struct nodeList getNode_Tail(list lst) {
  list p_current = lst;

  // ciclo per raggiungere l'ultimo elemento della coda
  while (p_current != NULL) {
    p_current = p_current->next;
  }

  return *p_current;
}

// acquisizione del valore di un generco nodo
item getNode_Value(struct nodeList *node) { return node->value; }

// inserimento in testa
list insertNode_head(list lst, item value) {
  list lst_out;
  struct nodeList *new_node;
  new_node = (struct nodeList *)malloc(sizeof(struct nodeList));
  if (!new_node) {
    exit(-1);
  } else {
    new_node->value = value; // inserimento di value
    if (isEmpty(lst)) {
      new_node->next = NULL; // inserimento del successivo [ CASO LISTA VUOTA ]
    } else {
      new_node->next = lst; // inserimento del successivo
    }
  }

  lst_out = new_node; // assegnazione del nodo di testa
  return lst_out;     // restituzione nuova lista
}

// stampa lista
void printList(list lst) {
  list p_current = lst;
  int i = 0;
  // scorrimento lista
  while (p_current != NULL) {
    printf("[%d] -> %d \n", i, p_current->value.item);
    p_current = p_current->next; // assegnazione del nodo successivo
  }
}