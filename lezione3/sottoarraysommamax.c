#include <stdio.h>

int sommamax(int a[], int dim){
    int somma=0;
    int i=0;
    int max=0;
    while (i<dim) {
        if (a[i]<0) {
            somma = somma + a[i];
            if (somma < 0)
                somma=0;
        }

        else {
            somma=somma+a[i];
            if(somma>max) max=somma;
        }
            i++;
        }



    return max;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int i=0;

    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d", sommamax(a, n));
    return 0;
}
