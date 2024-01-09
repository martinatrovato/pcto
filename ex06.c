#include <stdio.h>
int main (){
    char a;
    printf ("inserisci il paese in cui vivi\n");
    scanf ("%c", &a);
    int b;
    printf ("inserisci la tua età\n");
    scanf ("%d", &b);
   if (( a== 'I') && (b>=18)) {
    printf ("puoi prenedere la patente\n");
   }
    else if ((a =='I') && (b<18)) {
    printf ("non puoi prendere la patente\n");
   }
}