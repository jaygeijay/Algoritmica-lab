#include <stdio.h>
#include <stdlib.h>

int main(){
int conta=0;        //contatore per gli elementi che compaiono sia nel primo che nel secondo vettore
int i=0;
int j=0;
int arraya;
int arrayb;

scanf("%d\n",&arraya);     //inserisco il numero degli elementi del primo vettore
int a[arraya];          //primo vettore
    for(i=0;i<arraya;i++) {
        scanf("%d\n", &a[i]);         //carico il primo vettore con gli elementi
    }


    scanf("%d\n",&arrayb);        //inserisco il numero degli elementi del secondo vettore
    int b[arrayb];               //secondo vettore
        for(i=0;i<arrayb;i++) {
            scanf("%d",&b[i]);      //carico il secondo vettore con gli elementi
        }

i=0;
j=0;
  while (j<arraya && i<arrayb) {

          if (a[j]<b[i]) j++;
          else if (a[j]>b[i]) i++;
          else {
              j++;
              i++;
          conta++;}
  }

  printf("%d", conta);
return 0;
}
