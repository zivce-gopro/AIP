#include "stdio.h"
#include "math.h"

void zad115() {
	int N,p=0,B,k,i;
	printf("koliko brojeva?");
	scanf("%d",&N);
	for (i=0;i<N;i++){
		
		printf("uneti broj?");
		scanf("%d",&B);
		k=2;
	while (B%k!=0 && k<sqrt(B)) {
			k++;
		
		}
		if (k>sqrt(B))
			p++;
	}
	printf("broj prostih %d",p);

}// 1 Zadatak - 2015 - Kolokvijum 1

void zad215() {
	int i,obA=0,obB=0;
	float x,y;
	for (i=0;i<10;i++) {
		printf("uneti %d tacku",i+1);
		scanf("%f %f",&x,&y);
		if ((y<6)&&(y>4)&&(x<4)&&(x>2))
			obA++;
		else if ((y<5)&&(y>3)&&(x<6)&&(x>4)) 
			obB++;
		else if ((y<4)&&(y>3)&&(x>3)&&(x<4))
			obB++;
	}
	printf("Broj tacaka u oblasti A= %d\nBroj tacaka u oblasti B = %d",obA,obB);

}// 2 Zadatak - 2015 - Kolokvijum 1
void zad315 () {
	int n,a[30],imx,imn,maxA,minA,i,k;
	
	printf("Duzina niza?\n");
	scanf("%d",&n);
	
	printf("Unesi niz\n");
	
	for (i=0;i<n;i++) {
		scanf("%d",&a[i]);
	} 

	maxA = a[0];
	minA = a[0];
	imx=0;
	imn=0;
	for (i=0;i<n;i++) {
		if (maxA < a[i]) {
			maxA = a[i];
			imx = i;
		}

		if (minA > a[i]) {
			minA = a[i];
			imn = i;
		}
	}
	for (k=imx; k<n ; k++) {
		a[k] = a[k+1];
	}
	n--;
	for (k=imn; k<n ; k++) {
		a[k] = a[k+1];
	}
	n--;

	for (i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
}// 3 Zadatak - 2015 - Kolokvijum 1

void zad415() {
	int n,a[30],i,j,p;
	printf("Duzina niza?\n");
	scanf("%d",&n);
	
	printf("Unesi niz\n");
	
	for (i=0;i<n;i++) {
		scanf("%d",&a[i]);
	} 

	for (i=0;i<n;i++) {
		printf("%d ",a[i]);
	} 
	printf("\n");
	for (i=1;i<n;i+=2){
		for (j=i+2;j<n;j+=2){
			if(a[i]<a[j]){
				p=a[i];
				a[i]=a[j];
				a[j]=p;
			}
		}		
	}

	for (i=0;i<n;i+=2){
		for (j=i+2;j<n;j+=2){
			if(a[i]>a[j]){
				p=a[i];
				a[i]=a[j];
				a[j]=p;
			}
		}		
	}

	for (i=0;i<n;i++) {
		printf("%d ",a[i]);
	} 

}// 4 Zadatak - 2015 - Kolokvijum 1

void zad2216 () {
	int n,p=0,i,obA,obB;
	float x,y;
	printf("Broj tacaka?\n");
	scanf("%d",&n);

	for (i=0;i<n ; i++) {
		printf("Unesi %d tacku",i+1);
		scanf("%f %f",&x,&y);
		obA = (x-4)*(x-4) + (y-4)*(y-4) <= 4;
		obB = !obA && (x-4)*(x-4) + (y-4)*(y-4) <= 16;

		if (obA) p+=10;
		else if(obB) p+=5;

		printf("x= %f y=%f broj= %d poeni= %d ",x,y,i+1,p);
		if (obA) printf("Oblast= A");
		else if(obB) printf("Oblast= B");
		else printf("Oblast= C");
		printf("\n");

	}

}// 2 Zadatak - 2016 - Januar 

void zad3315() {
	int n,i,a[30],k;
	printf("Duzina niza?\n");
	scanf("%d",&n);
	
	printf("Unesi niz\n");
	
	for (i=0;i<n;i++) {
		scanf("%d ",&a[i]);
	} 

	for (i=0;i<n;i++) {
		printf("%d ",&a[i]);
	} 
	

	for (i=0;i<n;i++) {
		if (a[i]%2 == 0) {
			k=i;
			while ((a[k] % 2 == 0) && (k<n))
				k++;
			a[k]+=a[i];

		}
	}
	for (i=0;i<n;i++) printf("%d ",a[i]);



}//Svaki element koji je paran dodaje na prvi sledeci koji je neparan
void zad113() {
	int B,i;
	for (B=100;B<1000;B++){
		i=2;
		while (B % i != 0 && i< sqrt(B))
			i++;
		if (i>sqrt(B))
			printf("%d\n",B);
	
		}
}// 1 Zadatak - 2013 - Kolokvijum 1
void zad213 () {
	int ob=1,p=0;
	float x,y;

	while (ob) {
		printf("unesi tacku\n");
		scanf("%f %f",&x, &y);

		ob = ((y>1) && (y<3) && (x>1) && (x<3)) ||( (y>4-x) && (y<6-x) ); 
		if (ob) {
			printf("Tacka %f %f pripada oblasti", x,y);
			printf("\n");
			p++;
		}
	
	}
	printf("Uneto je %d tacaka",p);
	
}// 2 Zadatak - 2013 - Kolokvijum 1
void zad313 () {
	int n,a[30],k,p=1,i;
	printf("Duzina niza?\n");
	scanf("%d", &n);
	for (i=0;i<n;i++)	scanf("%d", &a[i]);
	
	printf("Duzina sekvence?\n");
	scanf("%d",&k);
	i=0;
	while (p<k && i<n){
		if (a[i] == a[i+1]){
			p++;
			i++;
		} else {
			p=1;
			i++;
		}
	
	}
	if (i == n) printf("nema odg pozicije");
	else printf("odg pozicija %d",(i+1)-k);

}// 3 Zadatak - 2013 - Kolokvijum 1

void zad112 () {
	int S,p=0,B;
	printf("Pocetna suma?\n");
	scanf("%d",&S);
	while (S>0) {
		printf("Uneti broj\n");
		scanf("%d",&B);
		if(B%2==0) S+=B;
		else S-=B;
		p++;
	}
	printf("Suma = %d, Brojeva = %d", S, p);

}// 1 zadatak - Kolokvijum I - 2012

void main() {
	//zad112();
	//zad313();
	//zad213();
	//zad113 ();
	//zad3315();
	//zad2216();
	//zad415();
	//zad315();
	//zad215();
	//zad115();
}