#include <stdio.h>

void reset (int array[], int len) {
    int i=0;
    for (i=0; i<len; i++){
        array[i]=0;
    }
}

void add (int array[], int len, int val) {
    if ((val < 0) || (val>=len )) return;
    array [val]+=1;
}

int main () {
    int a[10];
    int i=0;
    int val=0;

    reset (a,10);

    while (val!= -1) {
        scanf("%d", &val);
        add(a, 10, val);
    }

    for (i=0; i<10; i++) {
        printf("%d\n", a[i]);
    }





    return 0;
}
