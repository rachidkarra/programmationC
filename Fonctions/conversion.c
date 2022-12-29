#include <stdio.h>


double conversion(double dollars)
{
	double dirhams = 0;
	dirhams = 0.090009 * dollars;
	return dirhams;
}

int main()
{
	printf("010 DH= %.2lf $\n", conversion(10));
	printf("050 DH = %.2lf $ \n", conversion(50));
	printf("100 DH = %.1lf $ \n", conversion(100));
	printf("200 DH = %.1lf $ \n", conversion(200));
   
 //   printf('Press any key to continue...');
 //   getchar();
	return 0;
}

