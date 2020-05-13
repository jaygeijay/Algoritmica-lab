#include <stdio.h>

int main(){
    int N;
    int i;
    scanf("%d", &N);
    int a[N];
    int posmin;
    int tmp;
    int j;

    for(i=0;i<N;i++) {
        scanf("%d", &a[i]);          //caricamento vettore
    }

    for(i=0; i<N-1; i++) { //l'ultimo elemento sarà già al posto giusto
        posmin=i;

            // cerchiamo il minimo dell'array e lo portiamo alla fine della porzione di array gia ordinata
            // inizialmente vuota


            for(j=i+1;j<N;j++) {
                if (a[j]<a[posmin])
                    posmin=j; }

                tmp=a[i];
            a[i]=a[posmin];
            a[posmin]=tmp;
    }
    for(i=0;i<N;i++) {
        printf ("%d\n", a[i]);
    }
    return 0;
}
