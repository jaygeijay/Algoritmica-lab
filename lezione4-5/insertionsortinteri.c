//dato un array di interi di n elementi ordinarlo usando insertion sort
//
//tempo insertion sort O(n^2)

#include <stdio.h>

int main(){
    int N;
    int i;
    scanf("%d", &N);
    int a[N];
    int key;
    int j;

    for(i=0;i<N;i++) {
        scanf("%d", &a[i]);          //caricamento vettore
    }

    for (j=1; j<N; j++) {           //inizio insertion sort
        key = a[j];
        i = j - 1;
        while (i>-1 && a[i] > key) {
            a[i+1] = a[i];
            i =i-1;
            a[i+1] = key;
        }
    }                               //fine insertion sort

    for(i=0;i<N;i++) {
        printf ("%d\n", a[i]);
    }
    return 0;
}
