////////////////////////////////////////////////////
//												 //
//		V TXT souboru ulo�te re�ln� ��sla		//
//	    vytvo� program, kter� vyp�e ��sla	   //
//      		a vypo��t� pr�m�r             //
//										     //
//////////////////////////////////////////////

#include <stdlib.h>
#include <stdio.h>

int main()
{
	FILE *f;
	int cislo,pocet,i;
	f = fopen("data.txt", "w");
	
	if (f == NULL)
	{
		printf("Soubor se nepodarilo nacist");
		return -1;
	}
	printf("Zadej pocet cisel: ");
	scanf("%d", &pocet);
	for(i=0; i<pocet; i++)
	{
		printf("Zadej cisla: ");
		scanf("%d", &cislo);
		fprintf(f, "%d", cislo);
	}
	if (fclose(f)==EOF)
	{
		printf("Soubor se nepodarilo zavrit");
	}
		else
		{
			printf("Data se ulozila do souboru");
		}
	
	return 0;
}
