#include <stdio.h>
#include <string.h>

#define N (1000)

char *mystrcat(char *s1, char *s2){
    char *x=s1, *y=s2;
    int j;
    int i;
    i=strlen(s1);
    for(j=0; s1[j]!='\0'; j++)
        s1[i+j]=s2[j];		//copiamo la stringa s2 alla fine della stringa s1, ovvero concateniamo i due vettori
    s1[i+j]=0;

    return s1;
}

int main(){
    char s1[N];
    char s2[N];
    scanf("%s", s1);
    scanf("%s", s2);
    printf("%s", mystrcat(s1,s2));
    return 0;
}
