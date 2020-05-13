#include <stdio.h>
#include <string.h>
int anagramma (unsigned char *x, unsigned char *y) {
    int i;
    int xc[256], yc[256];
    for (i=0; i<256; i++) {xc[i]=yc[i]=0;}
    int lenx=strlen(x);
    int leny=strlen(y);
    if (lenx!=leny) return 0;

    for (i=0; i<lenx; i++) {
        xc[x[i]] += 1;
        yc[y[i]] += 1;
    }

    for (i=0; i<256; i++) {
        if(xc[i]!=yc[i]) return 0;
    }
    return 1;
}
int main (){

    unsigned char s1[256];
    unsigned char s2[256];
    scanf("%s", s1);
    scanf("%s", s2);
    printf("%d", anagramma(s1,s2));
    return 0;
}

