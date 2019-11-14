#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct rekening
{
	float saldo;
	struct Nasabah{
		char Nama_Lengkap[20];
		char Nama_Bank[5];
		char No_Rek[20];	
	};
	struct tanggal_lahir{
		int tanggal;
		int bulan;
		int tahun;
	}date;
	struct 	alamat{
		char alamat[20];
		char Nama_Kota[10];
		char provinsi[20];	
	};
};
typedef struct rekening rek;

int main() 
{

	rek data[20];
	strcpy (data[0].Nama_Lengkap,"Mimin Lestari");
	strcpy (data[0].Nama_Bank,"BCA");
	strcpy (data[0].No_Rek,"180810");
	data[0].date.tanggal = 27;
	data[0].date.bulan= 02;
	data[0].date.tahun = 2000;
	strcpy (data[0].alamat,"Jln.Kenangan No.14");
	strcpy (data[0].Nama_Kota,"Jombang");
	strcpy (data[0].provinsi,"Jawa Timur");
	data[0].saldo = 2500000;
		
	strcpy (data[1].Nama_Lengkap,"Irwansyah Malik");
	strcpy (data[1].Nama_Bank,"Bni");
	strcpy (data[1].No_Rek,"180811");
	data[1].date.tanggal = 04;
	data[1].date.bulan = 10;
	data[1].date.tahun = 1995;
	strcpy (data[1].alamat,"Jln.Semarang No.14");
	strcpy (data[1].Nama_Kota,"Blitar");
	strcpy (data[1].provinsi,"Jawa Timur");
	data[1].saldo = 3000000;

	strcpy (data[2].Nama_Lengkap,"Vian Ilham Raharjo");
	strcpy (data[2].Nama_Bank,"Bni");
	strcpy (data[2].No_Rek,"180812");
	data[2].date.tanggal = 10;
	data[2].date.bulan= 12;
	data[2].date.tahun= 1999;
	strcpy (data[2].alamat,"Jln.Melati No.12");
	strcpy (data[2].Nama_Kota,"Surabaya");
	strcpy (data[2].provinsi,"Jawa Timur");
	data[2].saldo = 6000000;
	
	strcpy (data[3].Nama_Lengkap,"Prasetyo Agung");
	strcpy (data[3].Nama_Bank,"Bri");
	strcpy (data[3].No_Rek,"180813");
	data[3].date.tanggal = 29;
	data[3].date.bulan = 11;
	data[3].date.tahun = 2002;
	strcpy (data[3].alamat,"Jln.Anggrek No.19");
	strcpy (data[3].Nama_Kota,"Kediri");
	strcpy (data[3].provinsi,"Jawa Timur");
	data[3].saldo = 5500000;	
		
	strcpy (data[4].Nama_Lengkap,"Lailatul Maulya");
	strcpy (data[4].Nama_Bank,"BTN");
	strcpy (data[4].No_Rek,"180814");
	data[4].date.tanggal = 10;
	data[4].date.bulan = 11;
	data[4].date.tahun = 1995;
	strcpy (data[4].alamat,"Jln.Python No.67");
	strcpy (data[4].Nama_Kota,"Lumajang");
	strcpy (data[4].provinsi,"Jawa Timur");
	data[4].saldo = 7000000;

	strcpy (data[5].Nama_Lengkap,"Dedi Apranto");
	strcpy (data[5].Nama_Bank,"BCA");
	strcpy (data[5].No_Rek,"180815");
	data[5].date.tanggal = 18;
	data[5].date.bulan = 06;
	data[5].date.tahun = 1993;
	strcpy (data[5].alamat,"Jln.Gondang No.90");
	strcpy (data[5].Nama_Kota,"Purwakerto");
	strcpy (data[5].provinsi,"Jawa Timur");
	data[5].saldo = 8500000;
	
	strcpy (data[6].Nama_Lengkap,"Ida Sri Anita");
	strcpy (data[6].Nama_Bank,"BRI");
	strcpy (data[6].No_Rek,"180816");
	data[6].date.tanggal = 16;
	data[6].date.bulan = 01;
	data[6].date.tahun = 1988;
	strcpy (data[6].alamat,"Jln.Wetan No.22");
	strcpy (data[6].Nama_Kota,"Gresik");
	strcpy (data[6].provinsi,"Jawa Timur");
	data[6].saldo = 4500000;
	
	
	int i, pilih, cari;
	while (pilih != 1 || pilih != 2 || pilih != 3 || pilih != 4 || pilih !=5 || pilih!=6){
		
		printf("-----------------------------------------\n");
		printf("        SELAMAT DATANG \n");
		printf(" Anda Masuk di Program INI BANKQU\n");
		printf("-----------------------------------------\n");
		printf("Pilih Menggunakan Angka\n");
		printf("1. Tampilkan Semua Data Nasabah  \n");
		printf("2. Tampilkan Data Nasabah berdasarkan No Rekening \n");
		printf("3. Tampilkan Total Saldo Nasabah \n");
		printf("4. Tampilkan Data Nasabah Berdasarkan Kota \n");
		printf("5. Tampilkan Data Nasabah dengan Umur Tertentu \n");
		printf("6. Tampilkan Nasabah dengan Saldo Terbesar dan Terkecil \n");
		printf("7. Keluar \n");
		printf("Masukkan Pilihan Anda : \n");
		scanf("%d", &pilih);
		
		if(pilih == 1){
			printf("Data Seluruh Nasabah : \n\n");
			for(i = 0; i<7; i++){
				printf("Nama Nasabah		: %s\n",data[i].Nama_Lengkap);
				printf("Nama Bank		: %s\n",data[i].Nama_Bank);
				printf("Nomer Rekening		: %s\n",data[i].No_Rek);
				printf("Tanggal Lahir		: %d-%d-%d\n",data[i].date.tanggal,data[i].date.bulan,data[i].date.tahun);	
				printf("Alamat			: %s %s\n",data[i].alamat,data[i].Nama_Kota);
				printf("Provinsi		: %s\n",data[i].provinsi);
				printf("Saldo Nasabah		: %.2f\n\n",data[i].saldo);
			}
		}
		
		if(pilih == 2) {
			char nomer[20],salah=0;
			printf("Masukan Nomor Rekening =  ");
			scanf("%s",&nomer);
			for(i=0; i<7; i++){
				if(!strcmp(data[i].No_Rek,nomer)){
					
					printf("Nama Nasabah		: %s\n",data[i].Nama_Lengkap);
					printf("Nama Bank		: %s\n",data[i].Nama_Bank);
					printf("Nomer Rekening		: %s\n",data[i].No_Rek);
					printf("Tanggal Lahir		: %d-%d-%d\n",data[i].date.tanggal,data[i].date.bulan,data[i].date.tahun);	
					printf("Alamat			: %s %s\n",data[i].alamat,data[i].Nama_Kota);
					printf("Provinsi		: %s\n",data[i].provinsi);
					printf("Saldo Nasabah		: %.2f\n\n",data[i].saldo);
					salah=1;
					break;	
				}
			}
			if(salah == 0){
				printf("Data Tidak Ditemukan \n\n\n");
				
			}
		}
		if(pilih == 3){
			printf("-----------------------------------------\n");
			printf("         TOTAL SALDO NASABAH             \n");
			printf("-----------------------------------------\n");
			float jumlah=0;
			for(i=0; i<7; i++){
				jumlah = jumlah + data[i].saldo;
				printf("%.2f\n",data[i].saldo);			
			}
			printf("------------+\n");
			printf("%.2f\n\n",jumlah);
		}
		
		if(pilih == 4){
			char kota[10],salah=0;
			printf("Masukan Kota Anda = ");
			scanf("%s",&kota);
			printf("Hasil Pencarian :\n\n");
			for(i=0; i<7; i++){
				if(!strcmp(data[i].Nama_Kota,kota)){
						
					printf("Nama Nasabah		: %s\n",data[i].Nama_Lengkap);
					printf("Nama Bank		: %s\n",data[i].Nama_Bank);
					printf("Nomer Rekening		: %s\n",data[i].No_Rek);
					printf("Tanggal Lahir		: %d-%d-%d\n",data[i].date.tanggal,data[i].date.bulan,data[i].date.tahun);	
					printf("Alamat			: %s %s\n",data[i].alamat,data[i].Nama_Kota);
					printf("Provinsi		: %s\n",data[i].provinsi);
					printf("Saldo Nasabah		: %.2f\n\n",data[i].saldo);
						salah=1;
						break;
				}
			}
			if(salah == 0){
				printf("Data Tidak Ditemukan \n\n\n");
			}
		}
		
		if(pilih == 5){
			int umur,tahun,salah=0;
			printf("-----------------------------------------\n");
			printf("   PENCARIAN NASABAH BERDASARKAN UMUR           \n");
			printf("-----------------------------------------\n\n");
			printf("Masukan Umur Nasabah = ");
			scanf("%d",&umur);
			for(i=0; i<7; i++){
			tahun=2019-umur;
				if(tahun==data[i].date.tahun){
				printf("Nama Nasabah		: %s\n",data[i].Nama_Lengkap);
				printf("Nama Bank		: %s\n",data[i].Nama_Bank);
				printf("Nomer Rekening		: %s\n",data[i].No_Rek);
				printf("Tanggal Lahir		: %d-%d-%d\n",data[i].date.tanggal,data[i].date.bulan,data[i].date.tahun);	
				printf("Alamat			: %s %s\n",data[i].alamat,data[i].Nama_Kota);
				printf("Provinsi		: %s\n",data[i].provinsi);
				printf("Saldo Nasabah		: %.2f\n\n",data[i].saldo);
						salah=1;
						break;
				}
			}
			if(salah == 0){
				printf("Data Tidak Ditemukan\n\n\n");
			}
		}
		
		if(pilih == 6){
			printf("------------------------------------------------\n");
			printf("  Jumlah Saldo Nasabah Terbanyak dan Terkecil      \n");
			printf("------------------------------------------------\n\n");
			float Min=0,Max=0;
			for(i=0; i<7; i++){
				if(data[i].saldo < Min || Min == 0){
					Min = data[i].saldo;
				}
				if (data[i].saldo > Max || Max == 0){
					Max = data[i].saldo;
				}
				
			}
			printf("Saldo Terbesar = %.2f \n",Max);
			printf("Saldo Terkecil = %.2f\n\n\n",Min);
		}
		if(pilih ==7){
			system("cls");
			printf("Terimakasih Selamat Datang Kembali di BANKQU");
			break;
		}

		fflush(stdin);
		char lanjut;
		printf("Apakah anda ingin melanjutkan program ini (y/n)\n");
		scanf("%c",&lanjut);
		if(lanjut == 'n'){
			printf("\nTerimakasih Sudah Mencoba Program Ini \n\n\n");
			break;
		}
		fflush(stdin);
		system("cls");
		
		
	}
	return 0;
}
