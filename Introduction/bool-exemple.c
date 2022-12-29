#include <stdio.h>
//

int main(void) {
    _Bool x = 18;   /*  Changer la valeur a 10 , 19 107  */
    _Bool y = 0;
    if (x) /*  C interprete tout non nul  (!= 0) comme vrai, c'est-�-dire 1 */
    {
        printf("_Bool type de donn�es C natif");
   }
   /* if (!y) /* Equivalent a (y == 0) 
   {
       puts("_Bool  n'a pas besoin de <stdbool.h>");
   } */

}