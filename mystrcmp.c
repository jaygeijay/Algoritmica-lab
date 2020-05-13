#include <stdio.h>
#include <string.h>
#define N (1000)

int mystrcmp(char*s1, char*s2) {
    int ok = 0;
    int n = 0;
    int a = strlen(s1);
    int b = strlen(s2);

    if (a == b) {
        while (n <= a && !ok) {
            if (*(s1 + n) > *(s2 + n)) {
                ok = 1;
                return 1;
            } else {
                if (*(s1 + n) < *(s2 + n)) {
                    ok = 1;
                    return -1;
                }

            }
            n++;
        }
        if (!ok) return 0;
    } else {
        if (a > b) return 1;
        else return -1;
    }
}
int main() {
    char s1 [N];
    char s2 [N];
    scanf("%s", s1);
    scanf("%s", s2);
 if (mystrcmp(s1,s2)==1)
    printf("+1");
  else if (mystrcmp(s1,s2)==-1)
    printf("-1");
  else
    printf("0");

    return 0;
}
