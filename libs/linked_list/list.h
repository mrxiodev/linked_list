#include "./list.c"

// Sintattica :
// Semantica :
typedef struct nodeList *list;

// SINTATTICA : listConcat( list, list ) -> list
/*

  SEMANTICA
  listaConcat( lst1, lst2 ) -> lst_out
  Pre-condizione:
  - lst1 e lst2 siano due liste non vuote

  Post-condizione:
  - lst_out sia una lista contenente gli elementi di lst1 e lst2
  - la dimensione di lst_out sia pari alla somma delle dimensioni di lst1 e
  lst2;
*/
list listConcat(list lst1, list lst2);

/* SINTATTICA : get_ListSize( list ) -> int  */
/*
  SEMANTICA
    get_ListSize( lst ) -> size
    Pre-condizione:
    - lst sia una lista non vuota
  
    Post-condizione:
    - int corrisponde alla dimensione di lst
*/
int get_ListSize(list lst);

/* SINTATTICA : isEmpty( list ) -> int  */
/*
  SEMANTICA
    isEmpty( lst ) -> flag_empty
    Pre-condizione: // 
    Post-condizione:
    - flag_empty corrisponde a true (1) se la lista è vuota, false (0) se non vuota
*/
int isEmpty(list l);

/* SINTATTICA : newEmptyList() -> list  */
/*
  SEMANTICA
    newEmptyList() -> lst_out
    Pre-condizione: // 
    Post-condizione:
    - lst_out sia una lista con puntatore a NULL
*/
list newEmptyList();

/* SINTATTICA : getNode_Head( list ) -> nodeList  */
/*
  SEMANTICA
    getNode_Head( lst ) -> node
    Pre-condizione: lst sia una lista non vuota 
    Post-condizione:
    - node sia un nodo della lista lst
*/
struct nodeList getNode_Head(list lst);

/* SINTATTICA : getNode_Tail( list ) -> nodeList  */
/*
  SEMANTICA
    getNode_Tail( lst ) -> node
    Pre-condizione: lst sia una lista non vuota 
    Post-condizione:
    - node sia un nodo della lista lst
*/
struct nodeList getNode_Tail(list lst);

/* SINTATTICA : getNode_Value( nodeList ) -> item  */
/*
  SEMANTICA
    getNode_Value( *node ) -> value
    Pre-condizione: node sia un nodo della lista
    Post-condizione:
    - value sia il contenuto del nodo
*/
item getNode_Value( struct nodeList *node);

/* SINTATTICA : insertNode_Head( list, item ) -> list  */
/*
  SEMANTICA
    insertNode_Head( lst, value ) -> lst_out
    Pre-condizione: lst sia una lista 
    Post-condizione:
    - lst_out sia una lista contenente gli elementi di lst a cui è aggiunto ( in testa ) value
*/
list insertNode_Head(list lst, item value);

/* SINTATTICA : printList( list ) -> list  */
/*
  SEMANTICA
    printList( lst ) -> lst

*/
void printList(list l);
