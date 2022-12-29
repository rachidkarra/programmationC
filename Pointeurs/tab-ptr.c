#include <stdio.h>
#define N 10

int main()
{
	int temperatures[] = { 19, 37, 20, 32, 8 };

	printf("%lu \n", temperatures);
	printf("%lu \n", &temperatures[0]);
	
    /// 

	printf("%lu \n", *temperatures);
	printf("%lu \n", *(temperatures+1));

	return 0;
}