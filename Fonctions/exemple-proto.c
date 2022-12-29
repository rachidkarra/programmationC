#include <stdio.h>

void fonctionAffectation1(int);

int main(void)
{
	int x = 1;
	printf("La valeur de x avant la methode %d  \n", x);
	fonctionAffectation1(x);
	printf("La valeur de x apres la methode %d   \n", x);
}

void fonctionAffectation1(int x)
{
	x = 2; /* le x local est modifie, pas le x du main */
}