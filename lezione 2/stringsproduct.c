#include <stdio.h>
#define N (1000)

char* product(char*str, int k) {
    int i=0;
    while (i<k) {
        printf("%s", str);
        i++;
    }

}
int main() {
    char str[N];
    int k;
    scanf("%s", str);
    scanf("%d", &k);
    product(str,k);
    return 0;
}
