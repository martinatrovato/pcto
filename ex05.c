#include <stdio.h>
int main () {
  int a; 
  printf ("inseisci primo numero\n");
  scanf ("%d\n", &a);
  printf ("il numero inserito è : %d\n", a);

  if(a % 2 == 0){
    printf ("è pari\n");
  }
  else if (a %2 != 0){
    printf("è dispari\n");
  }



}