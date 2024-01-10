#include <stdio.h>
int ft_interative_power(int nb, int power)
{
int res;
res=nb;
if (power<0){
    return 0;
}
if (power ==0){
    return 1;
}
while (power -->1){
    res*=nb;
}
return res;
}
int main (){
    int a;
    printf ("inserisci primo numero\n");
    scanf ("%d", &a);
    int b;
    printf ("inserisci secondo numero\n");
    scanf ("%d", &b);
    int res = ft_interative_power(a,b);
printf ("il risultato della potenza è: %d\n", res);



}