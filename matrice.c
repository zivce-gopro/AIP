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

void zad2 () {
	int n,i,j,a[30][30],max,min,imin,jmin,imax,jmax,p;
	printf("Uneti N\n");
	scanf("%d",&n);
	printf("Uneti niz\n");	
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("\n");
	for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				printf("%d ",a[i][j]);}
			printf("\n");}
	printf("\n");

	max = a[n-1][0];
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			if ((a[i][j]>max) && (i>j)) {
				imax = i;
				jmax = j;
			}//nadji imax i jmax

	min = a[0][n-1];
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			if ((a[i][j]<min) && (i<j)) {
				imin = i;
				jmin = j;
			}//nadji imin i jmin 

			//zamena
			p=a[imin][jmin];
			a[imin][jmin]=a[imax][jmax];
			a[imax][jmax] = p ; 
	
		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				printf("%d ",a[i][j]);}
			printf("\n");}


}//Zadatak 2 - matrice.pdf


void main () {
	//zad2();
	//zad1();
}
