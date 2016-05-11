#include "stdio.h"

int prost(int A) {
	int k=2,p=0;
	while(A%k!=0 && k<A) k++;
	if(k==A) p=1;
	return p;
}

void zamena(int *a,int *b) {
	int pom;
	pom=*a;
	*a=*b;
	*b=pom;
}

int bin2dec(int B[], int N) {
	
	int r=1,M=0,i;
	
	for(i=0;i<N;i++) {
		M+= B[i] * r;
		r*=2;
	}

	return M;

}

void minimax(int *X, int N, int *imax,int *imin) {
	int min=X[0],max=X[0],i;
	for(i=0;i<N;i++)
		if(max<X[i]){
			max= X[i];
			*imax = i;
		}

	for(i=0;i<N;i++)
		if(min>X[i]){
			min = X[i];
			*imin = i;
		}

}//cetvrti_zad_f-ja

void delioci(int B, int *X, int *N)
{
	int i,k;
	k=0;

	for(i=1;i<=B;i++){
		if(B % i == 0) {
			X[k] = i;
			k++;
			*N=k;
		}	
	
	}

}


void sortiranje(int *X, int S, int N) {
	int i,j,pom;
	if(S<0) {
		for(i=0;i<N;i++)
			for(j=0;j<N;j++)
				if(X[i]<=X[j]){
					pom = X[i];
					X[i] = X[j];
					X[j] = pom;}
				
				}
	else {
			
		for(i=0;i<N;i++)
			for(j=0;j<N;j++)
				if(X[i]>=X[j]){
					pom = X[i];
					X[i] = X[j];
					X[j] = pom;}
					
				
				
				}
	
	}

void border(int M[50][50], int N, int S) {
	int i,j;
	
	for(i=0;i<N;i++){
		printf("|");
		for(j=0;j<S-1;j++)
			printf("%d ",M[i][j]);
		printf("%d",M[i][S-1]);
		printf("|\n");}

}

void main() {
	/*
	int N,x,b=0,i;
	printf("unesi N\n");
	scanf("%d",&N);

	for(i=0;i<N;i++){
		printf("unesi %d broj\n",i+1);
		scanf("%d",&x);
		if(prost(x)) b++;}//end_for
	printf("Od %d brojeva %d brojeva je prosto\n",N,b);
	*/ //prvi_zad_main

	/* int x,y,z;
	printf("unesi x,y,z\n");
	scanf("%d %d %d",&x,&y,&z);
	printf("%d %d %d\n",x,y,z);
	zamena(&x,&y);
	zamena(&y,&z);
	printf("%d %d %d\n",x,y,z);*/ //drugi_zad_main


	/* int N,i,B[40];
	printf("broj cifara?\n");
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d",&B[i]);	
	}

	printf("%d\n",bin2dec(B,N)); */ //treci_zad_main


	/*int N,i,B[40],imx,imn;
	printf("Duzina niza?\n");
	scanf("%d",&N);
	imx=0;imn=0;

	for(i=0;i<N;i++){
		scanf("%d",&B[i]);	
	}
	minimax(B,N,&imx,&imn);

	printf("imin = %d imax = %d\n",imn,imx);
	*/ //cetvrti_zad_main
	/*int B,M=0,A[50],i;
	scanf("%d",&B);
	delioci(B,A,&M);
	for(i=0;i<M;i++)
		printf("%d ",A[i]);*/ //peti_zad_main

	/*int N,i,A[50],B[50],S;

	printf("duzina niza?");
	scanf("%d", &N);
	printf("unesi clanove");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
		B[i] = A[i];
	}

	for(i=0;i<N;i++)
		printf("%d ",B[i]);

	printf("\n");

	S=-1;

	sortiranje(A,S,N);

	for(i=0;i<N;i++)
		printf("%d ",A[i]);
	printf("\n");

	S=1;

	for(i=0;i<N;i++)
		printf("%d ",B[i]);

	printf("\n");

	
	sortiranje(A,S,N);

	for(i=0;i<N;i++)
		printf("%d ",A[i]);
	printf("\n");
	*/ //sesti_zad_main


	int i,j,N,M;
	int A[50][50];
	printf("Uneti N, M\n ");
	scanf("%d %d",&N,&M);

	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			scanf("%d",&A[i][j]);
	border(A,N,M);


	}




