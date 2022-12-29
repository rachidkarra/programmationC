#include "../CProject.h"

int FactorielleRecursive(int n) {
	if (n <= 0)
		return 1;
	else
		return n * FactorielleRecursive(n - 1);  // Appel recursive
}

int FactorielleIterative(int n) {
	int i, result = 1;
	for(i=1; i <= n; i++){
		result *= i;
	}
	return result;
}
//
//int main()
//{
//	printf("Veuillez entrez un entier ");
//	int n; scanf("%d", &n); 
//	printf("Factorielle de %d est : %ld\n", n, FactorielleRecursive(n));
//
//	return 0;
//}