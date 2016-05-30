#include "stdio.h"
#include "string.h"
#include "malloc.h"
#include "stdlib.h"

int elem(char p, char S[]){
	int b=0,i=0;
	while(i<strlen(S)){
		if(p==S[i]) b=1;
		i++;
	}
	return b;
}


char* nadoveziI(char S1[],char S2[]){
	int i=0,p=strlen(S1),m=strlen(S2);
	char *SR;
	SR = (char *)calloc(p+m,sizeof(char));
	strncpy(SR,S1,p);
	while(i<=m)
		SR[p+i] = S2[i++];
	
	return SR;
}

/*
char* nadoveziII(char S1[], char S2[]){
	int m=strlen(S1),p=strlen(S2),i,j;
	S1 =(char *)malloc(m*sizeof(char));
	S1 = (char *)realloc(S1,(m+p)*sizeof(char));
	for(i=m,j=0;i<p;i++,j++) S1[i] = S2[j];

	return S1;
}
*/


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
	 /*int k,i,b,s,r,j,m=0; 
	char ra[101],sout[51] = " ",p;
	printf("unesi rec\n");
	gets(ra);
	printf("unesi k\n");
	scanf("%d",&k);
	i=0;
	while(i<strlen(ra)){
	b=1;p=ra[i];
	if(elem(p,sout) == 0){
			for(j=i+1;j<strlen(ra);j++)
				if(p==ra[j]) b++;
		}//end_if
	if(b>=k) {
		sout[m] = p;
		m++;
	}
	i++;
	}//end_while

	for(i=0;i<m;i++)
		printf("%c\t",sout[i]);
	*/
	/* char S[51],M[51]= " ";
	int i,j,k,r,p;
	printf("unesi recenicu\n");
	gets(S);
	i=strlen(S);
	p=strlen(S);
	while (i>0 && S[i] != ' ') 	i--;

	k=0;
	for(r=i+1;r<p;r++){
		M[k]=S[r];
		k++;
	}
	M[k]= ' ';
	strncat(M,S,i);
	puts(M); //cetvrti_zad */


	/*
	int count = 0;
	char R[51],rc[21];
	const char *tmp = R;
	gets(R);printf("\n");gets(rc);
	while(tmp = strstr(tmp, rc))
	{
	   count++;
	   tmp++;
	}
	printf("%d",count);
	*/
	/*
	 int b=1,d=0,r=1;
	FILE *f;
	f = fopen("binarne-cifre.txt","r");
	while(!feof(f)){
		fscanf(f,"%d",&b);
		d+=b*r;
		r*=2;
	}
	printf("%d",d);
	fclose(f);//blanko na kraju prob
	//sesti_zad
	*/
	/*int p=0;
	char S[101],rec[51];
	FILE *f = fopen("tekst.txt","r");
	scanf("%s",&rec);
	while(!feof(f)){
		fgets(S,100,f);
		if(strstr(S,rec)) p=1;
	}
	if(p) printf("Y");
	else printf("N");
	//sedmi_zad
	
	*/
	/*char A[2001],B[2001];
	char* C;char* M;
	gets(A);gets(B);
	C = nadoveziI(A,B);
	puts(C);*/

	/*char s[1001];
	int i;
	gets(s);
	for(i=0;i<strlen(s);i++)
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 'a' - 'A';
	puts(s);
	*/ //deveti_zad
	char S[101];char *A;
	const char r= '.';
	char* po;
	int m,b=0,i,j,t;
	FILE *fi = fopen("recenice.txt", "r");
	FILE *fo = fopen("sadrze.txt","w");

	scanf("%d",&m);

	while (!feof(fi)){
		fgets(S,100,fi);
		i=0;b=0;
		while(S[i]!='\0'){
			t=0;
			while(S[i++]!='.') t++; //izbroj karaktere do tacke
		

			if(t>=m)
				for(j=b;j<=b+t;j++)
					fputc(S[j],fo);				
				
			//end_upisa

		b+=t+1;//da predje tacku
		
		}

	
	}//end_while

	fclose(fi);fclose(fo);
	//sadrze.txt formiran za m=10 

}