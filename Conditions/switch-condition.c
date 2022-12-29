#include <stdio.h> 
#define VALEUR 10

// VALEUR est considere comme expressionconstante, essayez avec VALEUR (const int)
//const int VALEUR = 10; pas une expression constante mais symbolique

int main()
{
int n; printf("donnez un entier:");


scanf("%d", &n);
switch(n)
{ case VALEUR-1 : printf("Valeur inferieure \n"); break;
 case VALEUR : printf("Valeur inferieure \n");
 case VALEUR+1 : printf("Valeur superieure \n"); break;
 default : printf("Valeur par default \n");
 return 0;
}
}