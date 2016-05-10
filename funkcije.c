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




	}




