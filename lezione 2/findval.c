#include <stdio.h>
#define N (10)
int * findval(int a[], int len, int val){
    int i=0;

            while (i<len) {
                if (a[i]==val) return &a[i];
                else i++;
            }
            return NULL;
}
int main(){
    int a[N];
    int i=0;
    int val;

    for (i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &val);


if (findval(a, N, val) != NULL) {
printf("trovato"); }
else {
printf("non trovato");}
    return 0;
}
