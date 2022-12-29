#include <stdio.h>

int main()
{
	int temperatures[3][4] = {{ 19, 37, 20, 32 }, { 1, 37, 25,45 }, { 7, 19, 25, 40 }};

	printf("La valeur de [1][3] %d \n", temperatures[1][3]);    // 45
	printf("La valeur de [1][4] %d ", temperatures[1][4]);    // 7 il passe a l'element suivant du tableau ,il deborde sur la ligne suivante
	return 0;
}