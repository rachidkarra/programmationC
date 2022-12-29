#include <stdio.h>

int main()
{
	char c;
	puts("Saisissez un caractere");

	scanf("%c", &c);
	//getchar();
	//c = getchar();
	printf("Le caractere saisie est: %c \n", c);

    return 0;
}


/* Si vous ajouter un espace dans la ligne 9 :  scanf("%c   ", &c); le buffer va attendre la premiere non whitespace
 avant de sortir.
  c11 standards
  scanf will read and discard all withespace characters until a non-whitespace character is encountered
 
 */
