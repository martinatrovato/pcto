#include <stdio.h>
int main () {
    int a;
    int primo =1;
    printf ("inserisci primo numero\n");
    scanf ("%d", &a);
    for (int i=2; i < a; i++){
        if (a% i ==0){
            primo = 0;
 }
 }
if (primo == 2){
    printf ("il numero è primo");
} else if (primo == 0){
    printf ("il numero non è primo");
}
return 0;

}