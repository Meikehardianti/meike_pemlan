#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main() {
   	int i, j, nilai, x, awal, akhir, tengah, n, cari,jumlahdata;
   
	int data[10] = {10,50,6,3,12,33,5,7,89,17};
	
	jumlahdata = sizeof(data)/sizeof(data[0]);
	printf("Jumlah data : %d", jumlahdata);
	 
 	printf("\nData Sebelum di Urutkan\n");
 	for(i=0; i<10; i++)
	{
        printf("%d, ", data[i]);
    }
    printf("\n\nData Sesudah di Urutkan\n");
    for (i = 0; i < 10 - 1; i++)
	{
    	for (j = 10 - 1; j > i; j--)
		{
        	if (data[i] > data[j])
			{
          	int temp = data[j];
          	data[j] = data[i];
          	data[i] = temp;
        	}
    	}
	}
    x=10;
    for(i=0;i<x;i++)
	{	
		nilai = data[i];
        printf("%d, ", nilai);
    }
    printf("\n"); 
        
   printf("\nMasukkan Data yang ingin dicari = \n");
   scanf("%d", &cari);
   
   awal = 0;
   akhir = jumlahdata - 1;
   tengah = (awal+akhir)/2;
 
	while(awal <= akhir)
    {
      if (data[tengah] < cari)
	  {
      	awal = tengah + 1; 
	  }    
      else if (data[tengah] == cari) 
	  {
        printf("Angka %d berada pada indeks ke %d.\n", cari, tengah+1);
        break;
      }
      else
        akhir = tengah - 1;
    	tengah = (awal + akhir)/2;
   }
   
   if (awal > akhir) {
		printf("Angka %d tidak berada pada indeks diatas ", cari);
	}
	
   return 0;  
}
