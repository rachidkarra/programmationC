#include "../CProject.h"

typedef struct etudiant {
	int note_en_lettre;
	char note_en_chiffre;

}  Etudiant;

//
//int main() {
//	//  a la place de  =>  struct etudiant khalid;
//	Etudiant khalid;
//	khalid.note_en_chiffre = 15;
//	khalid.note_en_lettre = 'B';
//	// 
//	Etudiant yassine = { 14, 'C'};
//	printf("L'etudiant khalid a une note de: %d \n", khalid.note_en_chiffre);
//	//
//	khalid.note_en_chiffre = yassine.note_en_chiffre;
//	printf("La nouvelle note de khalid est: %d", khalid.note_en_chiffre);
//}