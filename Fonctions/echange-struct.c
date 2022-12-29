#include "../CProject.h"

typedef struct etudiant {
	int note_en_lettre;
	char note_en_chiffre;

}  Etudiant;

void echangeEtudiant(Etudiant* a, Etudiant* b)
{
	Etudiant t;
	//t = *a;
	//*a = *b;
	t.note_en_chiffre = a->note_en_chiffre;
	a->note_en_chiffre = (*b).note_en_chiffre;
	*b = t;
}

//
//int main() {
//	// 
//	Etudiant khalid = { .note_en_chiffre = 15, .note_en_lettre = 'B' };
//	Etudiant yassine = { .note_en_chiffre = 14, .note_en_lettre = 'C' };
//
//	// Print
//	printf("L'etudiant khalid a une note de: %d   ******   ", khalid.note_en_chiffre);
//	printf("L'etudiant yassine a une note de: %d \n", yassine.note_en_chiffre);
//	//
//	echangeEtudiant(&khalid, &yassine);
//
//	// Print
//	printf("L'etudiant khalid a une note de: %d   ******   ", khalid.note_en_chiffre);
//	printf("L'etudiant yassine a une note de: %d \n", yassine.note_en_chiffre);
//}