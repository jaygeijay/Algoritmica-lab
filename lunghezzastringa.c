#include <stdio.h>
#define N (1000)

int my_strlen(char *s){
    int i=0;
    int c=0;
    while (s[i]) {
        c++;
        i++;
    }
    return c;
}
int main (){
    char s[N];
    scanf("%s", s);
    printf("%d", my_strlen(s));

    return 0;
}
