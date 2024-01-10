#include <stdio.h>
int main () {
float a = 5;
float numero_capi;
float costo;
while (1){
printf ("inserisci il numero di capi\n");
scanf ("%f", &numero_capi);
if (numero_capi <=0){
    printf ("operazione impossibile");
}
else if (numero_capi <=30 ){
   costo = numero_capi * 5; 
   printf ("il costo dei capi è\n, %f", costo);
}
else if (numero_capi>30 && numero_capi <=50){
costo= numero_capi * 5 * 10/100;
printf ("il costo dei capi è\n, %f", costo);
}
else if (numero_capi >50){
costo = numero_capi * 5 * 15/100;
printf ("il costo dei capi è\n, %f", costo);
}
}
return 0;
}