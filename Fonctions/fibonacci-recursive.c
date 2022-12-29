#include "../CProject.h"

long fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	else {
		long x = fibonacci(n - 1);
		long y = fibonacci(n - 2);
		return x + y;
	}
}

//void main() {
//	int n;
//	printf("Enterz un nombre entier: ");
//	scanf("%d", &n);
//	printf("Fibonacci de %d est % ld ", n, fibonacci(n));
//	//system("read -p 'Press Enter to continue...' var");
//}