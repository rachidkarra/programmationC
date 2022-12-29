#include <stdio.h>
#include <stdlib.h>

int fact(long);

int main(int argc, char* argv[]){

	printf("Le nombre d'arguments est: %d \n", argc);
	printf("Le premier argument est: %s \n", argv[0]);
	printf("Le deuxieme argument est: %s \n", argv[1]);
	fact(1L);

	EXIT_SUCCESS;
}


int fact(long n) {
	if (n < 0) {
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}

// ./exemple-main "test-argument"