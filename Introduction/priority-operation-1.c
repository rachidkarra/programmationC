// CProject.cpp : Defines the entry point for the application.
// in ubuntu --> sudo service ssh start

#include <stdio.h>


int main()
{
    printf("\n \n");
	int n = 5, m = 8;
	int q;
	float r;
	q = m > n;
	q = m < n;
	q = m % n + m > n;
	q = ++n;
	q = n++;
	q= n * (m > n ? n: m);
	r =  m / n; 
	r = (float) m / n;

	printf("Le resultat est %d \n", q);
	//printf("Le resultat est %f", r);

	return 0;
}
