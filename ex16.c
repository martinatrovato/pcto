#include <stdio.h>
int ft_fattoriale(int n){
int f = n;
for (int i=1; i< n; i++){
f*= i;
}
return f;
}
int main (){
     int n;
     int f2;
printf("inserisci il numero\n");
scanf ("%d", &n);
if (n< 0 && n> 12){
    printf ("impossibile\n");
}
else {
   f2 = ft_fattoriale(n);
    printf("il risultato del fattoriale è %d\n", f2) ;
}
    return (0);
}