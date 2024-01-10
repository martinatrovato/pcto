#include <stdio.h>
int main () {
    int lettera;
printf ("inserisci una lettera");
scanf ("%d", &lettera);
if (lettera == 65 || lettera == 69 || lettera == 73 || lettera == 79 || lettera == 85 || lettera == 97 || lettera == 101 || lettera == 105 || lettera == 111 || lettera == 117){
    printf ("la lettera è una vocale");
}else{
    printf ("la lettera è una consonante");
}
}