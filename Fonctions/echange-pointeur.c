#include <stdio.h>

void echange(int *a, int *b);


int main()
{
	int a = 14, b = 5;
	printf("a = %d; b = %d\n", a, b);
	echange(&a, &b);
	printf("a = %d; b = %d\n", a, b);
	return 0;
}
void echange(int* x, int* y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}