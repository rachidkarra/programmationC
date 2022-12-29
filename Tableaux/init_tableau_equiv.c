// InitTableauEquiv.cpp : Defines the entry point for the application.
// in ubuntu --> sudo service ssh start
//
#include <stdio.h>

int main()
{
    printf("\n \n");
	int temperatures1[3][4] = {{ 19, 37}, { 1, 37,45 }, { 7, 19, 25}};
	int temperatures2[3][4] = { 19 , 37 ,  1 , 37 , 45 , 7 , 19 , 25 };

	printf("La valeur de Temperatures1[1][2] %d \n", temperatures1[1][2]);    
	printf("La valeur de Temperatures2[1][2] %d \n",   temperatures2[1][2]);    
	return 0;
}