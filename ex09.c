#include <stdio.h>
int main () {
int a; 
printf ("inserisci numero primo lato");
scanf ("%d", &a);
int b;
printf ("inserisci numero secondo lato");
scanf ("%d", &b);
int c;
printf ("inserisci numero terzo lato");
scanf ("%d", &c);
if (( a == b ) && (b == c)){
    printf ( "il triangolo è equilatero");
} else if (( a == b) && (b != c)) {
    printf (" il triangolo è isoscele");
} else if (( a == c) && (c !=b)) {
    printf ("il triangolo è isoscele");
} else if (( b == c) && (c !=a)) {
printf (" il triangolo è isoscele");
}else if (( a !=  b) && (b != c)) {
printf ("il triangolo è scaleno");
}
return 0;

}