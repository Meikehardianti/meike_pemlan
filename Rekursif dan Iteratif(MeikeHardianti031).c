#include <stdio.h>
#include <stdlib.h>

int pangkat (int a, int b)//rekursif
{
	if(b == 0)
	{
		return 1;
	}
	else
	{
		return a*pangkat (a,(b-1));
	}
}
int loop (int a, int b)//iterasi
{
	int hasil = a;
	int i;
	for(i= 1; i < b; i++)
	{
		hasil = hasil*a;
	}
	return hasil;
}
int main()
{
	int a,b;
	printf("----------------------------------------------------\n");
	printf("          Selamat Datang di program Faktorial\n");
	printf("----------------------------------------------------\n");
	
	printf("Masukan Sebuah Bilangan  : ");
	scanf("%d",&a);
	
	printf("Masukan Pangkat          : ");
	scanf("%d",&b);
	
	printf("\n\n");
	printf("Hasil Rekursifnya adalah : %d\n",pangkat (a,b));
	printf("Hasil Iterasinya adalah  : %d\n", loop (a,b));
	
	printf("----------------------------------------------------\n");
	printf("\t\t\tTerimakasih\n");
	printf("----------------------------------------------------\n");
	return 0;
}
