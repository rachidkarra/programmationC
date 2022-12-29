// in ubuntu --> sudo service ssh start

#include "../CProject.h"

//int main()
//{
//	int i = 6;
//	printf("La valeur de i est %d ; La valeur de l'adresse de i est %lu  \n", i, &i);
//	int* ptr;
//	ptr = &i;
//	printf("La valeur du pointeur est %lu, et La valeur de l'adresse du pointeur est %lu \n", ptr, &ptr);
//
//	//operation:0
//	//ptr++;   //    Commente apres !!
//	//printf("Op0: La valeur du pointeur est %lu, et La valeur de l'adresse du pointeur est %lu \n", ptr, &ptr);
//
//	//operation:1
//	//(*ptr)++;   // le contenu de l'adresse sur laquelle pointe ptr est incremente
//	//printf("Op1: La valeur de i est : %d, la valeur du ptr est : %lu \n", i , ptr);
//
//	////operation:2
//	//*(ptr++);   // c'est la valeur de l'adresse qui est incrementee
//	//printf("Op2: La valeur de i est : %d, la valeur du ptr est : %lu \n", i, ptr);
//
//	////operation:3
//	//*ptr++;   // l'operation de postfix ++ est prioritaire que * de derefernce
//	//printf("Op3: La valeur de i est : %d, la valeur du ptr est : %lu \n", i, ptr);
//
//	//operation: 4
//	++*ptr;   //    Commente les operations avant !!   equivalent a ++(*ptr)
//				//L'operation ++ suffix est prioritaire que * de derefernce mais le suffix est de type association droite vers gauche
//	printf("Op4: La valeur de i est : %d, la valeur du ptr est : %lu \n", i, ptr);
//
//	return 0;
//}