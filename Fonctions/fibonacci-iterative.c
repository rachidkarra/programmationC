#include "../CProject.h"

long fibonacciIterative(int n) {
	int i;

	long fnm2 = 0; // fibonacci de n moins 2
	long fnm1 = 1; // fibonacci de n moins 1

	long fn; // fibonacci de n
	if (n <= 1) {
		fn = n;
	}
	else {
		for (i = 2; i <= n; i++) {
			fn = fnm1 + fnm2;
			fnm2 = fnm1;
			fnm1 = fn;
		}
	}
	return fn;
}

//void main() {
//	int n;
//	printf("Enterz un nombre entier: ");
//	scanf("%d", &n);
//	printf("Fibonacci de %d est % ld ", n , fibonacciIterative(n));
//}