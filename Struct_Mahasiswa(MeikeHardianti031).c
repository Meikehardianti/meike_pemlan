#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct data_mahasiswa
{
	int npm;
	float ipk;
};
typedef struct data_mahasiswa mhs;

int main(){
	int i, pilih, cari, lanjut;
	while (pilih != 1 || pilih != 2 || pilih != 3){
	mhs data[5];
	data[0].npm = 180;
	data[0].ipk = 4.00;

	data[1].npm = 181;
	data[1].ipk = 3.70;
	
	data[2].npm = 182;
	data[2].ipk = 3.80;
	
	data[3].npm = 183;
	data[3].ipk = 3.55;
	
	data[4].npm = 184;
	data[4].ipk = 4.00;
	
	A:
		printf("Pilih menggunakan angka\n");
		printf("1. Tampilkan data kecil ke besar\n");
		printf("2. Tampilkan data dari besar ke kecil \n");
		printf("3. Pencarian dari data\n");
		printf("Masukkan Pilihan Anda : \n");
		scanf("%d", &pilih);
		
		if(pilih == 1){
			printf("Data Mahasiswa : \n\n");
			for(i = 0; i<5; i++){
				printf("Npm : %d\n", data[i].npm);
				printf("ipk : %f\n\n", data[i].ipk);
			}
			printf("\nApakah anda ingin melanjutkan?\n1. Ya \n2. Tidak \n(Masukkan angka)\n Pilih angka : \n");
			scanf("%d", &lanjut);
			if(lanjut == 1){
				goto A;
			} else {
				printf("\nTerimaksih sudah mencoba program ini");
				return 0;
			}
			
		} else if (pilih == 2){
			printf("Data Mahasiswa : \n\n");
			for(i = 4 ; i>=0; i--){
				printf("Npm : %d\n", data[i].npm);
				printf("ipk : %f\n\n", data[i].ipk);	
		}	
			printf("\nApakah anda ingin melanjutkan?\n1. Ya \n2. Tidak \n(Masukkan angka)\n Pilih angka : \n");
			scanf("%d", &lanjut);
			if(lanjut == 1){
				goto A;
			} else {
				printf("\nTerimaksih sudah mencoba program ini");
				return 0;
			}
		
		} else if (pilih == 3){
			printf("Masukkan npm yang dicari : \n");
			scanf("%d", &cari);
			for(i = 0; i<5; i++){
				if(data[i].npm == cari){
					printf("Npm : %d\n", data[i].npm);
					printf("ipk : %f\n\n", data[i].ipk);
					break;
				}
			}	
			printf("\nApakah anda ingin melanjutkan?\n1. Ya \n2. Tidak \n(Masukkan angka)\n Pilih angka : \n");
			scanf("%d", &lanjut);
			printf("\nTerimaksih sudah mencoba program ini");
			if(lanjut == 1){
				goto A;
			} else {
				return 0;
			}
		} else {
			printf("Inputan anda salah\n");
			
	}
	}
	return 0;
}

