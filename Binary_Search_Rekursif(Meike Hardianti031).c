#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void cetak(int i, int data[])
{
    for(i=0; i<10; i++)
	{
        printf("%d, ", data[i]);
    }
}

void urutkan(int i, int j, int data[])
{
	int x, nilai;
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
}

/*int BinarySearch(int data[], int awal, int akhir, int cari)
{
    int nilaitengah = (awal+akhir)/2;
    
	if(awal>akhir)
	{
      return -1;
    } 
    
	else if(data[nilaitengah] == cari)
	{
      return nilaitengah;
    }
    
	else if(data[nilaitengah] < cari)
	{
      return BinarySearch(data, nilaitengah+1, akhir, cari);
    } 
    
	else 
	{
      return BinarySearch(data, awal, nilaitengah-1, cari);
    }
}*/

int main()
{	
	int data[10] = {10,50,6,3,12,33,5,7,89,17};
	int i, j, jumlahdata, cari, low,high,posisi,kunci;

	jumlahdata = sizeof(data)/sizeof(data[0]);
	printf("Jumlah data : %d\n", jumlahdata);
	
	printf("\nData Sebelum di Urutkan\n");
    cetak(i, data);

    printf("\n\nData Setelah di Urutkan\n");
    urutkan(i,j,data);

	printf("\n\nMasukkan Angka Yang Di Cari : "); 
	scanf("%d", &cari);
    
	low = 0;
    high = jumlahdata-1;
    
	posisi = ((kunci - data[low]) * ((high-low) + low))/ (data[high] - data[low]) ; 
	
	for(low = 0; low<=high ; low++)
	{
		if(data[posisi] == kunci)
		{
			printf("Data di temukan di array dan ber indeks ke %d", posisi+1);
			break;
		}
		else if(data[posisi] < kunci)
		{
			posisi = posisi + 1;
		}
	}
		
	if (low > high)
	printf("Tidak di temukan data %d pada array\n", kunci);
	
    return 0;
}
