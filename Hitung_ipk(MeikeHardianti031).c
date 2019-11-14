#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nama_matkul {
	char nama_matkul[20];
};

struct data_mahasiswa {
	char nama[50];
	int npm;
	struct nama_matkul mk;
};
typedef struct data_mahasiswa mhs;

int main() {
	
	printf("========================================SELAMAT DATANG DIPROGRAM HITUNG IPK===============================\n");
	
	float jumlah, i;
	int j,k,a;
	float ipk[3];
	float jumlah_sks;
	float nilai_konversi(float nilai){
	if (nilai == 'A'){
		return 4;
	} else if (nilai == 'A'){
		return 3;
	} else if (nilai == 'B'){
		return 2;
	} else if (nilai == 'D'){
		return 1;
	} else if (nilai == 'E'){
		return 0;
	}
	
}
	mhs data[3];
	strcpy(data[0].nama,"Irwansyah santosa");
	strcpy(data[1].nama,"Nabila Indah");
	strcpy(data[2].nama,"Maretya Ariningtyas");
	
	data[0].npm=18081010010;
	data[1].npm=18081010065;
	data[2].npm=18081010074;
	
	strcpy(data[0].mk.nama_matkul,"Bela Negara");
	strcpy(data[1].mk.nama_matkul,"Pemrograman Lanjut");
	strcpy(data[2].mk.nama_matkul,"Metode Numerik");
	
	int sks[3] = {4,2,3};
	char nilai[3][3] = {  {'B', 'A', 'D'}, {'A', 'A', 'A'}, {'B','A', 'A'} };

	for(k=0; k<3; k++){
		jumlah = 0;
		i = 0;
		jumlah_sks = 0;
		
		printf("\n						 *DATA MAHASISWA* \n");
		printf("\nNama Mahasiswa 	: %s\n", data[k].nama);
		printf("NPM 		: %d\n\n", data[k].npm);
		
		for(a=0; a<3; a++){
			printf("Mata kuliah 		= %s \n", data[a].mk.nama_matkul);
			printf("Jumlah sks 		= %d\n",sks[a]);
			printf("Nilai Mahasiswa 	= %c\n", nilai[k][a]);
			printf("Konversi Nilai 		= %f\n\n", nilai_konversi(nilai[k][a]));
		}
		
		for(j=0; j<3; j++){
			jumlah_sks += sks[j];
			jumlah += (nilai_konversi(nilai[k][j]) * sks[j]);
			i = jumlah / jumlah_sks;
			ipk[k] = i;
		}
		printf("\nIPK 			= %f\n", ipk[k]);
		printf("\n\n\n\n");
		
	}
	
	return 0;
}
