# Traccia 1 - Prova all'impronta Programmazione I #

Sviluppare una function C, che dati come parametri di input un array di int  e il suo size, determina e restituisce come parametro di utput il secondo più grande elemento dell'array (N.B: non bisogna seguire l'idea di ordinare prima l'array).

# Soluzione spiegata #

la soluzione più semplice potrebbe essere ardinare l'array in ordine decrescente e ritornare il secondo elemento dall'array rdinato, con una complessità di O(nlogn) ma la traccia lo vieta.

una migliore soluzione potrebbe essere attraversare l'array due volte. Nella prima fissiamo l'elemento massimo. Nella seconda traversata troviamo l'elemento più grande
ma più piccolo rispetto all'elemento ottenuto nella prima traversata. La complessità temporale di questa soluzione è O (n).

I passi sono i seguenti:

1 - Inizializza due variabili prima e seconda a INT_MIN (valore che specifica che una variabile intera non può essere storata sotto quel limite) quindi avremo :

    first = second = INT_MIN

2 - Se l'emento corrente nell' array nel momento iesimo [i] è più grande del primo, allora aggiorna primo e secondo come:

    second = first
    first = arr[i]
    
2.1 - Se l'emento corrente è in mezzo tra il primo e il secondo, allora aggiorna il secondo per storare il currente valore come:

    second = arr[i]
    
3 - ritorna il valore conservato nella variabile second:

    return second
