#include <stdio.h>
#define N (1000)

char* strcat1(char *s1, char *s2) {
    int i=0;
    int j=0;
    while(s1[i]) {
        printf("%c",s1[i++]);
    }
    while(s2[j]) {
        printf("%c",s2[j++]);
    }

}

int main() {
    char s1[N];
    char s2[N];
    scanf("%s", s1);
    scanf("%s", s2);
    strcat1(s1,s2);
 return 0;

