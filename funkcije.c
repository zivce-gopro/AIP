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


	int N,i,B[40],imx,imn;
	printf("Duzina niza?\n");
	scanf("%d",&N);
	imx=0;imn=0;

	for(i=0;i<N;i++){
		scanf("%d",&B[i]);	
	}
	minimax(B,N,&imx,&imn);

	printf("imin = %d imax = %d\n",imn,imx);

	}




