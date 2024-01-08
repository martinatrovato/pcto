#include <stdio.h>
int main () {
    int a ;
     printf ("inserisci primo numero/n");
    scanf ("%d/n", &a);
printf ("primo numero inserito è: %d/n", a );
 int b;
 printf ("inserisci secondo numero/n");
scanf ("%d/n", &b);
printf ("secondo numero inserito è: %d/n", b);

int w = a%b;
printf ("a modulo b = w, %d", w);
return 0;

}
