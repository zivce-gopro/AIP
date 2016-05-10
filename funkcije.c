#include "stdio.h"
int prost(int A) {
	int k=2,p=0;
	while(A%k!=0 && k<A) k++;
	if(k==A) p=1;
	return p;
}


void main() {
	int N,x,b=0,i;
	printf("unesi N\n");
	scanf("%d",&N);

	for(i=0;i<N;i++){
		printf("unesi %d broj\n",i+1);
		scanf("%d",&x);
		if(prost(x)) b++;}//end_for
	printf("Od %d brojeva %d brojeva je prosto\n",N,b);


	}




