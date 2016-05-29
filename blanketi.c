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
void zad212 () {
	int N,i,obA,obB,obC;
	float x,y;
	printf("Unesi broj tacaka\n");
	scanf("%d",&N);
	for (i=0;i<N;i++) {
		scanf("%f %f",&x,&y);
		obA = (x-2)*(x-2) + (y-2)*(y-2) < 1 ;
		obB = (x>0) && (y<2*x-2) && (y<6-2*x);
		obC = obA && obB;

		printf("R. broj = %d, (x,y) = (%f,%f) Oblast = ",i+1,x,y);

		if (obC) printf("C\n");
		
		else if (obB) printf("B\n");
		
		else if (obA) printf("A\n");

		else printf ("*\n");
	}//end_for


}//2 zadatak - Kolokvijum I - 2012
void zad312 () {
	int n,i,a[30],p=1;
	float avg,s=0;
	printf("Duzina niza?\n");
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		scanf("%d",&a[i]);
		s+=a[i];
	} 
	avg = s/n;
	for (i=0;i<n;i++) 
		if (a[i]>avg) {
			p*=a[i];
			
	printf("Proizvod je = %d\n",p);
		}
	printf("%f\n",avg);

}//3 zadatak - Kolokvijum I - 2012

void zad111 () {
	int x,i,m,n,tmp;
	printf("Uneti broj x\n");
	scanf("%d",&x);
	for (i=2;i<101;i++) {
		m=x;n=i;

		while ( m % n !=0 ) {
			tmp = m; 
			m=n;
			n = tmp % n;
		}
		if (n==1)
			printf("%d \t",i);

	}

}//1 zadatak - Kolokvijum I - 2011
void zad311 () {
	int n,i,a[30],k,r,j;
	printf("Duzina niza?\n");
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		scanf("%d",&a[i]);
	} 

	printf("Unesi broj k\n");
	scanf("%d",&k);
	// radi ali nestrukturno isprogramirano! 
	/*	r=0;

	for (i=r ; i<n ; i++) {
		while (a[r] != k && r<n)

			r++;
		if (r==n) {
		break;}
		for (j=r; j<n-1 ; j++)
			a[j] = a[j+1];
		n--;
		for (t=0;t<n;t++) 
			printf("%d ", a[t]);
		printf("\n");
		*/
	for (i=0;i<n;i++) {
		if (a[i] == k) {
			for (j=i;j<n-1;j++)
				a[j] = a[j+1];
			n--;
			for (r=0;r<n;r++)
				printf("%d ",a[r]);
		printf("\n");
		}
	
	}
		}//3 zadatak - Kolokvijum I - 2011

void zad110() {
	int m=0,B=14,S=0;
	while (m<100) {
		if (B%7 == 0 && B%3 != 0 && B % 4 ==2){
			printf("%d\t",B);
			m++;

		
			S+=B;B+=2;
		}
		else B+=2;
	}
	printf("Suma = %d", S);

}// 1 zadatak - Kolokvijum I - 2010
void zad210 () {
	int obA,obB,obC;
	float x,y;
	obA=1;
	obB=1;
	obC=1;

	while (obA || obB || obC) {
		printf("unesi tacku\n");
		scanf("%f %f",&x,&y);
		obA = (x-4)*(x-4) + (y-4) * (y-4) <=1;
		
		obB =(y>4-(2/3)*x) && ((x-4)*(x-4) + (y-4) * (y-4) <=16);
	
		obC =(y<4-(2/3)*x) && ((x-4)*(x-4) + (y-4) * (y-4) <=16);
	
		if (obA) printf("Oblast A\n");
		else if (obB) printf("Oblast B\n");
		else if (obC) printf("Oblast C\n");
	
	}

}// 2 zadatak - Kolokvijum I - 2010


void main() {
	zad210();
	//zad110();
	//zad311();
	//zad111();
	//zad312();
	//zad212();
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