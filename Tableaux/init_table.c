// init_table.c : Defines the entry point for the application.
// in ubuntu --> sudo service ssh start
//

#include <stdio.h>
#define N 10

int main()
{
  int temperatures1[] = {19, 37, 20, 32, 8};
  int temperatures2[5] = {};                // Les valeurs sont initialisees a z�ro
  int temperatures3[3] = {19, 37, 20, 32}; 
	int tab[N] = { 10, 18, 30 };              // Declaration valide de tableau, elle ne le sera pas si on declare const int N (pas en c++)
	int i;
 
	for (i = 0; i < 5; i++) {
        printf("temperatures1  %d " , temperatures1[i]);
		printf("temperatures2  %d " , temperatures2[i]);
		printf("tab  %d \n", tab[i]);
	}

//	/* Certaines op�rations ont un r�sultat non - sp�cifi� ou ind�fini, donc pour lesquels les choix
//	   peuvent varier d'un compilateur � l'autre. */
 printf(" temperatures2  %d  \n", temperatures2[8]);    
// system("read -p 'Press Enter to continue...' var");
	return 0;
}