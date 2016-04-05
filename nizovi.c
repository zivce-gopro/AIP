#include "stdio.h"

void zad1 () {
	int n,i,r,j,a[40],b=1,p;
	printf("duzina niza? \n");
	scanf("%d",&n);
	printf("unesi niz u jednoj liniji\n");
	for (i=0;i<n;i++)
	scanf("%d",a+i);
	for (i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");

		for (i=0;i<n;i++){
			if (a[i+1] == 0 && a[i]==0){
				b++;
				p=i+1;}
		};
		p++;
	a[p-b]=0;
	r=0;
	for (i=p-b+1;i<p;i++){
		a[i]=a[p+r];
		r++;}

	for (i=0;i<p;i++)
		printf("%d ",a[i]);


}
void zad2 () {

	int n,a[30],i,imax,j,p,s;
	double avg;
	printf("duzina niza? \n");
	scanf("%d",&n);
	printf("unesi niz u jednoj liniji\n");
	for (i=0;i<n;i++)
	scanf("%d",a+i);
	
	printf("\n");
	for (i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
	s=0;
	for (i=0;i<n-1;i++) {
		imax = i;
		for (j=i+1;j<n;j++) 
			if(a[j]>a[i]) imax = j ; 
		p= a[imax];
		a[imax]= a[i];
		a[i]=p;
		s=s+a[i];
	} 
	avg = s / n ;
	
	for (i=0;i<n;i++)
	printf("%d ",a[i]);
	
	printf("\n");
	printf("Aritmeticka sredina : %.2f", avg );
	

}
void zad3 () {
	int v,n,s=0,i=0,a[30];
	float avg;
	printf("unesi broj v\n");
	scanf("%d",&v);
	
	printf("\n");
	printf("Pocni sa unosom elemenata\n");
	while (s<v){
		scanf("%d",&a[i]);
		s+=a[i];
		i++;
	}
	n=i++;
	avg = (float) s / (float) n;
	printf("Avg = %f\nBroj el. = %d\nSuma = %d\n",avg,n,s);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");

}
void zad4 () {
	int n,s=0,i,a[20],b=0;
	double avg ; 
	printf("duzina niza? \n");
	scanf("%d",&n);
	printf("unesi niz u jednoj liniji\n");
	for (i=0;i<n;i++){
		scanf("%d",a+i);
		s+=a[i];
	}

	avg = (double) s / (double) n;
	
	printf("Odg. elementi:\n");
	for (i=0;i<n;i++){
		if (a[i]<avg) {
			printf("%d ",a[i]);
			b++;
		}
	}
	
	printf("\n");
	printf("Prosek = %f\nBroj odg. elemenata = %d\n",avg,b);
	} 
void zad5() {
	int n,k,j,i,a[20],p;
	printf("duzina niza? \n");
	scanf("%d",&n);
	printf("unesi niz u jednoj liniji\n");
	for (i=0;i<n;i++)
		scanf("%d",a+i);
	printf("koliko rotacija?\n");
	scanf("%d",&k);
	
	printf("\n\n");
		
	printf("Pre rotacije:\n");
	for (i=0;i<n;i++)
		printf("%d ",a[i]);

	for (j=0; j<k; j++){
		
			p=a[0];
		for (i=0;i<n;i++)
			a[i]=a[i+1];
			a[n-1]=p;

	}//rotacija za k

	
	printf("\n");
	printf("Posle rotacije:\n");
	for (i=0;i<n;i++)
		printf("%d ",a[i]);


}
void zad6 () {
	int i,n,a[100],b=1,p=0;
	printf("duzina niza?\n");
	scanf("%d",&n);
	printf("uneti niz u jednoj liniji\n");
	for (i=0;i<n;i++) scanf("%d",a+i);
	for (i=0;i<n;i++)
		if(a[i+1]>a[i]) {
			b++;
		} else {
			if (b>=p) {
				p=b;
				b=1;
			};
		} // end for end if 
	printf("%d\n",p);

}
void zad7 () {
	int n,i,j,m,k,a[50],b[50],c[100],imin,p;
	printf("duzina niza A?\n");
	scanf("%d",&n);
	printf("uneti niz u jednoj liniji\n");
	for (i=0;i<n;i++) scanf("%d",a+i);

	printf("duzina niza B?\n");
	scanf("%d",&m);
	printf("uneti niz u jednoj liniji\n");
	for (j=0;j<m;j++) scanf("%d",b+j);
	
	i=0;
	for (k=0;k<n;k++){
		c[k] = a[i];
		i++;	
	} 
	j=0;
	for (k=n;k<m+n;k++){
		c[k] = b[j];
		j++;	
	} 

	for (k=0; k<m+n-1; k++) {
		imin = k;
 		for (j=k+1;j<m+n;j++)
			if (c[j] < c[imin])
				imin=j;
		p=c[k];
		c[k]=c[imin];
		c[imin]=p;
	}

	for (k=0;k<m+n;k++)
		printf("%d ",c[k]);

}
void zad8 () {
	int i,n,m,e,j,p=0,k,a[30];
	printf("duzina niza A?\n");
	scanf("%d",&n);
	printf("uneti niz u jednoj liniji\n");
	for (i=0;i<n;i++) scanf("%d",a+i);
	printf("broj elemenata m\n");
	scanf("%d",&m);
	for (j=0;j<m;j++){
		printf("element e\n");
		scanf("%d",&e);
		
		for (i=0;i<n;i++)
			if (e == a[i])
				p=1; // ako postoji nista se ne radi 
		
		if (p==0) {
			for (i=0;i<n;i++){
				if ( e<a[i] && e>a[i-1]){//prosiri niz i ubaci sta treba
					n++;//mora zbog ispisa
					for (k=n ;k>i+1 ;k--) //pomeram udesno
						a[k]=a[k-1];
					a[i+1]=e;
					
				}
				printf("%d ",a[i]);
			
			}
		
		} // ne postoji u nizu





	}//m elemenata da se ubaci

}

void main(){
	//zad1();
	//zad6();
	//zad2();
	//zad3();
	//zad4();
	//zad5();
	//zad7();
	zad8();
}