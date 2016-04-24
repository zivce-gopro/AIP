#include "stdio.h"

void zad1() {
	int n,j,i,a[30][30],s=0,p=1;
	printf("Uneti N\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			scanf("%d",&a[i][j]);

	for (i=0;i<n;i++)
		for (j=0;j<n;j++){
			if(i<j)
				s+=a[i][j];
			if(i+j>n-1)
				p*=a[i][j];
		
		}

		printf("%d %d\n",s,p);


		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				printf("%d ",a[i][j]);}
			printf("\n");}


}//Zadatak 1 - matrice.pdf


void main () {
	//zad1();
}
