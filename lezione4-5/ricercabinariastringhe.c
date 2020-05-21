#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxlen 101

int ricercabinaria(char **a, int inizio, int fine, char *v) {       //ricerca binaria su stringhe

    if (inizio>fine)  return -1;
    else {
        if (strcmp(v,a[(inizio+fine)/2])==0)
            return (inizio+fine)/2;
    else if (strcmp(v,a[(inizio+fine)/2])<0 ) return ricercabinaria(a,inizio,((inizio+fine)/2)-1,v);
        else return ricercabinaria(a, ((inizio+fine)/2)+1,fine,v);}

}

int main(){
    int ok=1;
    int i;
    int dims;
    scanf("%d",&dims);                     //definizione della lunghezza N dell'array (input)
    char **stringa=malloc(dims* sizeof(char*));    //allochiamo una memoria della dimensione dell'array

    for (i=0; i<dims; i++) {
        stringa[i]=malloc(maxlen* sizeof(char*));   //allocazione memoria per ogni stringa e facciamo si che non superi il valore assegnato
        scanf("%s", stringa[i]);        //caricamento del vettore
    }

    while (ok==1) {
        scanf("%d", &ok);               //terminazione da input
        if (ok == 1) {                  //condizione di terminazione del programma
            char *chiave = malloc(maxlen * sizeof(char));   //allocazione della memoria per l'elemento da cercare
            scanf("%s", chiave);    //elemento da cercare in input
            printf("%d\n", ricercabinaria(stringa, 0, dims - 1, chiave));
        }
    }
    return 0;
}

