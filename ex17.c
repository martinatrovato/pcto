#include <stdio.h>
int radice(int delta){
 if (delta >=0){   
for (int i = 0; i < delta; i ++){
 if (i*i == delta){
    return i;
 }
}
}
else {
    printf ("errore");
}
}
int main (){
int a;
printf ("inserisci coefficente a\n");
scanf ("%d", &a);
int b;
printf ("inserisci coefficente b\n");
scanf ("%d", &b);
int c;
printf ("inserisci coefficente c\n");
scanf ("%d", &c);
int delta;
delta = b*b- a* 4 * c;
delta = radice(delta);
printf ("il risultato di delta è %d\n", delta);
int x1;
int x2;
if (delta > 0){
x1 = -b+delta;
x1 =x1/2*a;
x2 = -b -delta;
x2 = x2/2*a;
} else if (delta = 0){
x1 == x2;
} else if (delta < 0){
    printf ("non sono ammessi risultati reali\n");
}
printf ("x1=%d e x2=%d", x1, x2);
return 0;
}







