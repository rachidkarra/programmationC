#include <stdio.h>

int main(){

int i, resultat, n;
printf("--------------- Calcul Factorielle -----------------");
printf("\n\n");

printf("Entrez le nombre:");
scanf("%d",&n);

resultat = 1;
for(i=1; i<=n; i++){
    resultat *= i;
}
printf("Le resulat du factorielle est : %d \n\n", resultat);

    return 0;
}