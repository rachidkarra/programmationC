#include "../CProject.h"
// in ubuntu --> sudo service ssh start

void fonctionAffectation(int x)
{
	x = 2; /* le x local est modifi�e, pas le x du main */
}

//int main()
//{
//	int x = 1;
//	printf("La valeur de x avant la methode %d  \n", x);
//	fonctionAffectation(x);
//	printf("La valeur de x apres la methode %d   \n", x);
//}