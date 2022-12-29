#include <stdio.h>
int recur(int n) {
	if (n <= 0) {
		return 0;
	}
	else {
		printf("%d\n", n);
		return recur(n - 1);
	}
}
int main() {
	int x;
	printf("entrer un nombre : ");
	scanf("%d", &x);
	printf("%d", recur(x));
	return 0;
}
