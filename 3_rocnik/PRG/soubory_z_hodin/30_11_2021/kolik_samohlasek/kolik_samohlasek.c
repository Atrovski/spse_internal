     /////////////////////////////////////////////////////////////
    //														   //
   // Na�ti v�tu z kl�vesnice, zjisti kolik je tam samohl�sek //
  //			 po�et ulo� do TXT souboru                   //
 //															//
/////////////////////////////////////////////////////////////

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	char retezec[30];
	int i,samohlasky=0;
	
	
	
	printf("Zadej vetu: ");
	gets(retezec);
	int delka = strlen(retezec);
	
	for(i=0; i<delka; i++)
	{
		retezec[i] = tolower(retezec[i]); // p�evede v�echny p�smena na mal� aby se daly po��tat 
		switch (retezec[i])
		{
			case 'a':
			case 'e':
			case 'i':	
			case 'o':	
			case 'u': samohlasky++;
					  break;
				
				
	    }
		
	}
	printf("Pocet samohlasek ve vete je: %d", samohlasky);
	
	// Z�pis dat do souboru //
	
	FILE *f;
	f = fopen("data.txt", "w");
	if (f == NULL)
	{
		printf("Chyba pri otevirani souboru!");
		return -1;
	}
	fprintf(f, "%d",samohlasky);
	
	if(fclose(f)==EOF) 
			{
			printf("soubor se nepodarilo zavrit");
   			}
		else 
				{	
				printf("\nData se ulozila do souboru");
				}	
	
	
	
	
	return 0;
}
