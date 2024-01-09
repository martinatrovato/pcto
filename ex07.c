#include <stdio.h>
int main (){
    int a;
     int b;
    printf ("inserisci il primo numero\n");
    scanf ("%d", &a);
    printf ("inserisci secondo numero\n");
    scanf ("%d", &b);
    if (a%b == 0){
       printf("il numero a è multiplo di b\n"); 
    }

}