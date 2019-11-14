#include <stdio.h>
#include <conio.h>

int main() {
	int i, pilih, cari, lanjut;
	while (pilih != 1 || pilih != 2 || pilih != 3)
	{
		int npm[5] = {180,181,182,183,184};
		float ipk[5] = {4.00,3.70,3.80,3.55,4.00};
	
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
				printf("Npm : %d\n", npm[i]);
				printf("ipk : %f\n\n", ipk[i]);
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
				printf("Npm : %d\n", npm[i]);
				printf("ipk : %f\n\n", ipk[i]);	
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
				if(npm[i] == cari){
					printf("Npm : %d\n", npm[i]);
					printf("ipk : %f\n\n", ipk[i]);
					break;
				}
			}
			printf("\nApakah anda ingin melanjutkan?\n1. Ya \n2. Tidak \n(Masukkan angka)\n Pilih angka : \n");
			scanf("%d", &lanjut);
			if(lanjut == 1){
				goto A;
			} else {
				printf("\nTerimaksih sudah mencoba program ini");
				return 0;
			}			
		} 
		else {
			printf("Inputan Salah");
		}
	}
	
	return 0;
}
