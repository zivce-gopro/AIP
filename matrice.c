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
				max = a[i][j];
				imax = i;
				jmax = j;
			}//nadji imax i jmax

	min = a[0][n-1];
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			if ((a[i][j]<min) && (i<j)) {
				min = a[i][j];
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

void zad3() {
	int n,m,i,j,a[100][200],max,min,imin,imax,p;
	printf("Uneti N,M\n");
	scanf("%d %d",&n,&m);
	printf("Uneti niz\n");	
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	printf("\n");
	for (i=0;i<n;i++){
			for (j=0;j<m;j++){
				printf("%d ",a[i][j]);}
			printf("\n");}
	printf("\n");

	max = a[0][0];
	imax=0;
	for (i=0;i<n;i++)
			for (j=0;j<m;j++){
				if (a[i][j] > max){
					max = a[i][j];
					imax = i;}
			}//end forj 

			
	min = a[0][0];
	imin=0;
	for (i=0;i<n;i++)
			for (j=0;j<m;j++){
				if (a[i][j] < min){
					min = a[i][j];
					imin = i;}
			}//endfori


			//zamena
			
	for (i=0;i<n;i++)
			for (j=0;j<m;j++){
				p = a[imin][j];
				a[imin][j] = a[imax][j];
				a[imax][j] = p;
			}
				
	for (i=0;i<n;i++){
			for (j=0;j<m;j++){
				printf("%d ",a[i][j]);}
			printf("\n");}
}//Zadatak 3 - matrice.pdf

void zad4() {
	int a[3][6] = {
		{1,2,3,4,5,6},
		{1,2,3,5,7,9},
		{2,2,4,4,6,6}};
	int p,i,j,b[30],k;

	for (i=0;i<3;i++){
		for (j=0;j<6;j++){ 
			printf("%d ",a[i][j]);
			}
		printf("\n");}


	printf("\n");
	
	for (i=0;i<3;i++){
		k=0;
		for (j=5;j>=0;j--){
			b[k] = a[i][j];
			k++;	
		}

		k=0;
		for (j=0;j<6;j++){
			a[i][j] = b[k];
			k++;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}		
}//zadatak 4 - matrice.pdf

void zad5() {
	int n,m,i,j,a[30][50],min=0,s=0,jmin=0;
	printf("Uneti N,M\n");
	scanf("%d %d",&n,&m);
	printf("Uneti niz\n");	
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	printf("\n");

	for(i=0;i<n;i++)
		min += a[i][0];

	for(j=0;j<m;j++){
		for(i=0;i<n;i++)
			s+=a[i][j];
		if(s<min){
			min=s;
			jmin=j;
		}
	}

	printf("Minimalna suma= %d Indeks kolone = %d",min,jmin);
	printf("\n");

	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			printf("%d ",a[i][j]);}
		printf("\n");}


}//zadatak 5 - matrice.pdf

void zad6() {
	int a[5][5] = {
	1,2,3,4,5,
	6,3,4,5,6,
	1,1,23,4,6,
	12,3,4,5,6,
	2,3,5,6,1
	
	};

	int P[30],p,i,j,k,r,q,m;


	
	printf("Unesi K\n");
	scanf("%d",&k);

	for (i=0;i<5;i++){
		for (j=0;j<5;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}

	

	for (i=0;i<5;i++){
		q=0;
		for(j=0;j<5;j++)
			if(j>i){
				P[q] = a[i][j];
				q++;
			}//formiraj niz elemenata iznad glavne

		for(m=0;m<k;m++){
			p= P[q-1];
			for(r=q-1;r>0;r--)
				P[r] = P[r-1];
			P[0] = p;
		}//rotiranje k puta

		q=0;
		for(j=0;j<5;j++)
			if(j>i){
				a[i][j] = P[q];
				q++;
			}
	}//endfori

	printf("\n");
	for (i=0;i<5;i++){
		for (j=0;j<5;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}

}//zadatak 6 - matrice.pdf

void zad7() {
	int a[5][5] = {
	1,2,3,4,5,
	6, 7, 8, 9, 1, 
	2, 3, 4, 5, 6,
	7, 8, 9, 1, 2,
	3, 4, 5, 6, 7
	};
	int B[5][5], C[5][5],p,i,j;

	for (i=0;i<5;i++){
		for(j=0;j<5;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}

	printf("\n");

	for (i=0;i<5;i++){
		for(j=0;j<5;j++)
			B[i][j] = a[i][j];
	}

	for (i=1;i<5;i++){
		for(j=0;j<i;j++){
				p=B[i][j];
				B[i][j] = B[j][i];
				B[j][i] = p;
			} // transponovanje 
	}
	for (i=0;i<5;i++){
		for(j=0;j<5;j++)
			printf("%d ",B[i][j]);
		printf("\n");
	}

	printf("\n");

	for (i=0;i<5;i++){
		for(j=0;j<5;j++){
			C[i][j] = a[i][j] - 2 * B[i][j];
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}

		
		
	
}//zadatak 7 - matrice.pdf

void main () {
	
	zad7();
	//zad6();
	//zad5();
	//zad4();
	//zad3();
	//zad2();
	//zad1();
}
