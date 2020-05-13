#include <stdio.h>


char* strcat2(char *s1, char *s2) {
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
    int x;
    int y;
    scanf("%d", &x);
    char s1[x];
    scanf("%s", s1);
    scanf("%d", &y);
    char s2[y];
    scanf("%s", s2);
    strcat2(s1,s2);
    return 0;
}
