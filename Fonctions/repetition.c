#include <stdio.h>
#include <stdlib.h>

void message(long nombreDeLignes)
{
	long i;
	for (i = 0; i < nombreDeLignes; i++)
	{
		printf("Je dois travailler plus \n");
	}
}

int main()
{
	message(10);
	system("read -p 'Press Enter to continue...' var");   //linux
	//system("pause");   // for windows
	
	return 0;
}

