
![Logo](https://i.imgur.com/kzIEXHw.png)

# 💻 Programmazione e Strutture Dati
![Static Badge](https://img.shields.io/badge/mrxio%20developer%20-%20unisa-F39025) 


## Libreria "linked list"
folder: ``` ./libs ```

Il modulo presente nella suddetta repository, rappresenta una libreria contenente le funzioni primarie, fondamentali ( non tutte ), per la gestione di liste concatenate ( EN : linkedlist ).
La costituzione di un modulo, implementa quel concetto - seppur teorico - di IH [ Information Hiding ] e di DA [ Data Abstraction ] sugli algoritmi.

![Logo](https://i.imgur.com/UgmTwI4.png)

##### Un po' di codice : 

❓ **Com'è strutturata la lista?**
E' una struttura autoreferenziata, ovvero che ha un campo che punta verso un'istanza di se stessa

```C
struct nodeList {
  item value;
  struct nodeList *next;
};
```


❓ **Come definisco un tipo lista?** Dichiarare una lista è semplice. Definisco un puntatore 
```C
typedef struct nodeList *list;
```

  
![Logo](https://i.imgur.com/WLfJiIr.png)




## Elenco esercizi
Folder: ./esercitazioni/
## Documentazioni dei Progetti

[Documentation](https://linktodocumentation)
