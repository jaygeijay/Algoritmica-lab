#include <stdio.h>
#include <stdlib.h>
int* ordinati(int a[], int dima, int b[], int dimb ) {
    int i = 0;
    int j = 0;
    int k = 0;

    int *n = malloc((dima + dimb) * sizeof(int));

    while (i < dima && j < dimb) {
        if (a[i] > b[j]) {
            *(n + k) = b[j];
            j++;
            k++;
        } else {
            *(n + k) = a[i];
            i++;
            k++;
        }
    }
    if (i < dima) {
        while (i < dima) {
            *(n + k) = a[i];
            i++;
            k++;
        }
    } else if (j < dimb) {
        while (j < dimb) {
            *(n + k) = b[j];
            j++;
            k++;
        }
    }

    return n;
}



int main(){
    int dima;
    int dimb;
    int i=0;
    int *unione;
    scanf("%d", &dima);
    int a[dima];
    for (i = 0; i < dima ; ++i) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &dimb);
    int b[dimb];
    for (i = 0; i < dimb ; ++i) {
        scanf("%d", &b[i]);
    }

    unione=ordinati(a, dima, b, dimb);
    for (i=0; i<dima+dimb;i++){
        printf("%d \n", *(unione+i));}

return 0;
}
