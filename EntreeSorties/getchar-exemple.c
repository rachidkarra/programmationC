// getchar-exemple.c : Defines the entry point for the application.
// in ubuntu --> sudo service ssh start

#include "../CProject.h"


//int main()
//{
//	char fruits, legumes;
//	puts("Est que vous mangez 5 fruits ? y/n");
//	fruits = getchar();
//	getchar();
//	puts("Est que vous mangez 5 legumes ? y/n");
//	legumes = getchar();
//
//	if (fruits == 'y' && legumes =='y') {
//		printf("Felicitation vous prenez soins de votre sante !!");
//	}
//	else {
//		printf("Dommage, faites plus attention a vous !!");
//	}
//
//	return 0;
//}

// Le probleme c'est le retour chariot (entree considerer comme entree pour deuxieme getchar())
//  de la premiere reponse il est boufee par le deuxieme getchar
//Solution a la ligne 12: getchar();    Pour ne pas prendre en compte le retour a la ligne
