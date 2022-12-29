#include <stdio.h>

int main(){

int nombre_de_saisie , N, somme;
nombre_de_saisie=0;
somme = 0;

do{

printf("Entrez un nombre pour calculer la somme et moyenne / zero pour sortir:  ");
scanf("%d", &N);
    if(N > 0){
        somme += N;
        nombre_de_saisie++;
    }
} while(N !=0);

printf("La somme est %d \n", somme);
printf("La moyenne est : %lf \n", (double)somme/nombre_de_saisie);

return 0;
}