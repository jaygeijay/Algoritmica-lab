#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N (1000)

char* mystrcpy(char*dst, char*src) {
int i;
for (i=0; i<strlen(src); i++){
    *(dst+i)=*(src+i);
}
return dst;
}

int main() {
    char source[N];
    char *src= source;
    scanf("%s", source);
    char *dst=malloc(sizeof(char)*strlen(src));
    printf("%s", mystrcpy(dst,src));
    return 0;
}
