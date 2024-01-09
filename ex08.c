#include <stdio.h>
int main () {
float a;
printf ("inserisci una temperatura in Celsius\n");
scanf ("%f", &a);
if (a<-237.15){
    printf ("errore perchè la temperatura assoluta è minore dello zero assoluto\n");
}
float b;
b = a + 237.15;
if (a >= -237.15) {
    printf ("la temperatura in Kelvin è %f\n", b);
}
float w;
w = a *9/5 + 32;
if (a>= -273.15) {
    printf ("la temperatura in Fahrenheit è %f\n", w);
}
return 0;




}