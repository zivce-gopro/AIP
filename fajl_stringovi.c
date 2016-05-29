#include "stdio.h"
#include "string.h"

void main() {
	/* float S=0,avg;
	int i=0,b;
	FILE *f = fopen("brojevi.txt","a+");
	while(!feof(f)) {
		fscanf(f,"%d",&b);
		S+=b;
		i++;
	}
	avg= S/i;
	fprintf(f,"\n%.2f",avg);

	fclose(f); //Prvi Zadatak */

	char recenica[1001]; 
	int i=0;
	FILE *f = fopen("reci.txt","a");
	printf("unesi recenicu\n");
	gets(recenica);
	while(i < strlen(recenica)){
		if(recenica[i] != ' ') fprintf(f,"%c",recenica[i]);
		else fprintf(f,"\n");i++;
	} //end_while
	fclose(f);
}