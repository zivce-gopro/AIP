#include "stdio.h"
#include "string.h"

int elem(char p, char* S){
	int b=0,i=0;
	while(i<strlen(S)){
		if(p==S[i]) b=1;
		i++;
	}
	
	return b;
	

}

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

	 /* char recenica[1001]; 
	int i=0;
	FILE *f = fopen("reci.txt","w");
	printf("unesi recenicu\n");
	gets(recenica);
	while(i < strlen(recenica)){
		if(recenica[i] != ' ') fprintf(f,"%c",recenica[i]);
		else fprintf(f,"\n");i++;
	} //end_while
	fclose(f); //drugi zad 
	*/
	int k,i,b,s,r,j;
	char ra[101],sout[51],p;
	printf("unesi rec\n");
	gets(ra);
	printf("unesi k\n");
	scanf("%d",&k);
	i=0;
	while(i<strlen(ra)){
	b=1;p=ra[i];
	if(!elem(p,sout)){
		for(j=i+1;j<strlen(ra);j++)
			if(p==ra[j]) b++;
	if(b>=k) strcat(p,sout);
	i++;
	
	}//end_while	
	puts(sout);


}