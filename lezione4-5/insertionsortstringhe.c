//dato un array di stringhe di n elementi ordinarlo usando insertion sort

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define lenght (101)                    //dimensione dell'array

void insertionsort(char **a, int dim){
    int j,i;
    char* tmp=malloc(lenght* sizeof(char));         //allochiamo la memoria per la dimensione dell'array

    for(i=1;i<dim;i++) {
        tmp=*(a+i);
        j=i-1;

        while (j>=0 && strcmp(*(a+j), tmp)>0) {
            *(a+j+1)=*(a+j);
            j--;}
            *(a+j+1)=tmp;}
        }



int main() {
    int dims;
    int i;
    scanf("%d", &dims);                     //definizione lunghezza "array"
    char **stringa=malloc(dims* sizeof(char*));         //dimensione dell'array

    for(i=0; i<dims; i++) {
        stringa[i]=malloc(lenght* sizeof(char));    //allochiamo una memoria della dimensione dell'array
        scanf("%s", stringa[i]); }           //inserimento delle stringhe nell' "array"
    insertionsort(stringa, dims);           //vedi su

    for(i=0; i<dims;i++) {
        printf("%s\n", *(stringa+i));       //stampa delle stringhe dopo l'ordinamento
    }

    for(i=0; i<dims; i++) {
        free(*(stringa+i));
    }
    free(stringa);          //liberazione della memoria allocata
    return 0;
}
