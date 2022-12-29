#include <stdio.h>

void echange_sans(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
}
int main()
{
	int a = 14, b = 5;
	printf("a = %d; b = %d\n", a, b);
	echange_sans(a, b);
	printf("a = %d; b = %d\n", a, b);
	return 0;
}