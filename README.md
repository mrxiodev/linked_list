
![Logo](https://i.imgur.com/kzIEXHw.png)

# 💻 Programmazione e Strutture Dati
![Static Badge](https://img.shields.io/badge/mrxio%20developer%20-%20unisa-F39025) 


## Libreria "linked list"
folder: ``` ./libs ```
Come installo il modulo?
```git clone https://github.com/mrxiodev/linked_list.git```



Il modulo presente nella suddetta repository, rappresenta una libreria contenente le funzioni primarie, fondamentali ( non tutte ), per la gestione di liste concatenate ( EN : linkedlist ).
La costituzione di un modulo, implementa quel concetto - seppur teorico - di IH [ Information Hiding ] e di DA [ Data Abstraction ] sugli algoritmi.

![Logo](https://i.imgur.com/UgmTwI4.png)

<br>

### Un po' di codice... 
<hr>

❓ **Com'è strutturato un generico nodo di una lista?**
E' una struttura autoreferenziata, ovvero che ha un campo che punta verso un'istanza di se stessa

```C
struct nodeList {
  item value;
  struct nodeList *next;
};
```

❓ **Come definisco un tipo lista?** Dichiarare una lista è semplice. Definisco un puntatore che punta all'indirizzo del **nodo testa** della lista
```C
typedef struct nodeList *list;
```

❓ **Come scorro una lista?** Con un semplice ciclo! ( while || for )
```C
struct nodeList *p_current = list; // variabile iterativa
while( !p_current ) p_current = p_current->next;
```

❓ **Come creo una nuova lista?** Semplicemente con l'assegnazione del nodo che punta al nodo testa di NULL. Ciò significa che la lista è vuota. Non ha nessuna sequenza di nodi
```C
list = NULL;
```


<hr>

### Un esempio di algoritmo applicabile su di una lista

⚙️ **Inserimento/Rimozione di un nodo in testa** *( Sotto l'ipotesi per cui la lista esiste eh ha almeno un elemento )*
<br>
![Logo](https://i.imgur.com/xdsNiS6.png)

[Documentation](https://linktodocumentation)
