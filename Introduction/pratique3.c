#include <stdio.h>

int main(){
    int x, y, resultat ;
// Comparaison
    x= 10; y = 8;
    if(x < y){
        resultat = x ;
        }
    else {
        resultat = y;
        }
    printf("Le minimum est %d \n", resultat);
    
    return 0;
}