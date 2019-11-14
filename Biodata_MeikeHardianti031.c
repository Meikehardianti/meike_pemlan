#include <stdio.h>
#include <stdlib.h>


int main()
{
	system("color 6");
	char nama[20],nama_pag[20],tempat[20],bulan[20],npm[20],jurusan[20],Alamat[30],Agama[10],jenis_kel[20],cita[20],peker[50],telp[20];
	int tanggal,tahun;
	
	printf("=========================================\n");
	printf("	   SELAMAT DATANG					 \n");
	printf("	Di Program Biodata Diri               \n");
	printf("     Silahkan Isi Form Dibawah Ini       \n");
	printf("=========================================\n");
	
	printf("1. Masukan Nama Lengkap Anda	: ");
	scanf("%[^\n]s",&nama);
	
	printf("2. Masukan Nama Panggilan Anda	: ");
	scanf("%s",&nama_pag);
	
	printf("3. Masukan Tempat lahir		: ");
	scanf("%s",&tempat);
	
	printf("4. Masukan Tanggal Lahir Anda	: ");
	scanf("%d",&tanggal);
	
	printf("5. Masukan Nama Bulan Lahir Anda: ");
	scanf("%s",&bulan);
	
	printf("6. Masukan Tahun Lahir Anda	: ");
	scanf("%d",&tahun);
	
	printf("7. Masukan Npm Anda		: ");
	scanf("%s",&npm);
	
	fflush(stdin);
	printf("8. Masukan Jurusan Anda		: ");
	scanf("%[^\n]s",&jurusan);
	
	fflush(stdin);
	printf("9. Masukan Alamat Anda		: ");
	scanf("%[^\n]s",&Alamat);
	
	printf("10. Masukan Agama Anda		: ");
	scanf("%s",&Agama);
	
	printf("11. Masukan Jenis Kelamin Anda  : ");
	scanf("%s",&jenis_kel);
	
	printf("12. Masukan Cita-Cita Anda	: ");
	scanf("%s",&cita);
	
	printf("13. Masukan Pekerjaan Anda	: ");
	scanf("%s",&peker);
	
	printf("14. Masukan Telepon Anda	: ");
	scanf("%s",&telp);
	system ("cls");
	
	printf("\n\n");
	
	
	printf("=========================================\n");
	printf("	    DiBawah ini adalah      		 \n");
	printf("            Biodata Diri Anda	         \n");
	printf("=========================================\n");
	
	printf("|  Nama			: %s\t|\n",nama);
	printf("|  Nama Panggilan	: %s\t\t\t|\n",nama_pag);
	printf("|  TTL			: %s, %d %s %d  |\n",tempat,tanggal,bulan,tahun);
	printf("|  Npm			: %s\t\t|\n",npm);
	printf("|  Jurusan		: %s\t|\n",jurusan);
	printf("|  Alamat		: %s\t\t|\n",Alamat);
	printf("|  Agama		: %s\t\t\t|\n",Agama);
	printf("|  Jenis Kelamin	: %s\t\t|\n",jenis_kel);
	printf("|  Cita-Cita		: %s\t\t\t|\n",cita);
	printf("|  Pekerjaan 		: %s\t\t|\n",peker);
	printf("|  Telepon		: %s\t\t|\n",telp);
	
	
	printf("=========================================\n");
	printf("                  SEKIAN                 \n");
	printf("                TERIMAKASIH              \n");
	printf("=========================================\n");

	
	
	return 0;
}

