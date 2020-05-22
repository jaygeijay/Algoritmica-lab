//Questo sorgente contiene un’implementazione di Quicksort che deve essere
//completata scrivendo il corpo della funzione
//int distribuzione(int a[], int sx, int px, int dx)
//Tale funzione deve partizionare gli elementi dell’array a[sx . . . dx] utilizzando l’elemento a[px] come pivot e restituire la posizione di tale elemento dopo
//il partizionamento.

//La prima riga dell’input contiene la dimensione N (non limitata) dell’array.
//Le righe successive contengono gli elementi dell’array, uno per riga.
//L’output contiene gli elementi dell’array ordinato, su una sola riga.

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/*
  !!!!!!!!!!!! D A  F A R E !!!!!!!!!!!!
  sx e dx sono le posizioni del primo e dell'ultimo elemento dell'array mentre
  px è la posizione dell'elemento perno.
  La funzione deve restituire la posizione del perno dopo che gli elementi sono
  stati partizionati.
*/
void swap(int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
//partiziona quicksort
int distribuzione(int a[], int sx, int px, int dx) { //px è il pivot r è destra p è sinistra
    int i= sx-1;;
    int j;

    swap(&a[px], &a[dx]);
    for (j=sx; j<dx; j++) {
        if(a[j]<=a[dx]) {
            i++;
        swap(&a[i],&a[j]); }
    }
    swap(&a[i+1],&a[dx]);
    return i+1;
}


//procedura quicksort


void quicksort( int a[], int sx, int dx ) {

    int perno, pivot;
    if( sx < dx ) {
        /* DA IMPLEMENTARE: scelta del pivot. Scegliere una posizione a caso tra sx e dx inclusi. */

        pivot = dx;

        perno = distribuzione(a, sx, pivot, dx); /* separa gli elementi minori di a[pivot]
					        da quelli maggiori o uguali */

        /* Ordina ricorsivamente le due metà */
        quicksort(a, sx, perno-1);
        quicksort(a, perno+1, dx);

    }

}

/* Lettura di un array di interi da input.
Il primo elemento è la lunghezza dell'array */
int legge(int **a, int *len) {

    int i;
    scanf("%d", len);
    if(*len <= 0) return 1;

    *a = (int *) malloc(*len * sizeof(int));
    if(*a == NULL) return 1;

    for( i = 0; i < *len; i++ )
        scanf("%d", (*a)+i);

    return 0;

}



int main() {

    int i, n, *A;

    if( legge(&A, &n)) return 1;

    srand(time(NULL));
    quicksort(A, 0, n-1);

    /* Stampa l'array ordinato */
    for( i = 0; i < n; i++ )
        printf("%d ", A[i]);

    return 0;
}

