#include "../CProject.h"
// in ubuntu --> sudo service ssh start

void fonctionAffectationP(int* x)
{
	*x = 2; /* le x local est modifiée, pas le x du main */
}

//int main()
//{
//	int x = 1;
//	int *p = &x;
//	printf("La valeur de x avant la methode %d  \n", x);
//	fonctionAffectationP(p);   // ou  fonctionAffectationP(&x);
//	printf("La valeur de x apres la methode %d   \n", x);
//}