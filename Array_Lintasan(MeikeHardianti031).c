#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{									
	int data[3][3][3]={{{5, 1, 5}, {6, 2,8}, {1, 2, 1}}, //A-B-C
							{{-3, 2, 5}, {-4, 3, 4}, {-5, 7, 8}}, //D-E-F
									{{-1, 2, 5}, {7, 1, 2}, {-1, 6, 4}}}; //G-H-I
	int a,b,c;
 		for(a=0; a<3; a++){
		printf("Array ke %d \n", a+1);
		printf("================\n");
		printf("  x    y     z \n");
		printf("================\n");		
		for(b=0; b<3; b++){
			for(c=0; c<3; c++){
				printf("  %d  ", data[a] [b] [c]);
			}
		printf("\n");
		}
		printf("\n");
	};
	
	float jarak1,jarak2,jarak3,jarak4,jarak5,jarak6;
	float tot_jarak1,tot_jarak2,tot_jarak3;
	
	jarak1 = sqrt(pow((data[0][0][0]-data[0][1][0]),2)+pow((data[0][0][1]-data[0][1][1]),2)+pow((data[0][0][2]-data[0][1][2]),2));
	jarak2 = sqrt(pow((data[0][1][0]-data[0][2][0]),2)+pow((data[0][1][1]-data[0][2][1]),2)+pow((data[0][1][2]-data[0][2][2]),2));
	tot_jarak1 = jarak1+jarak2;
	
	jarak3 = sqrt(pow((data[1][0][0]-data[1][1][0]),2)+pow((data[1][0][1]-data[1][1][1]),2)+pow((data[1][0][2]-data[1][1][2]),2));
	jarak4 = sqrt(pow((data[1][1][0]-data[1][2][0]),2)+pow((data[1][1][1]-data[1][2][1]),2)+pow((data[1][1][2]-data[1][2][2]),2));
	tot_jarak2 = jarak3+jarak4;
	
	jarak5 = sqrt(pow((data[2][0][0]-data[2][1][0]),2)+pow((data[2][0][1]-data[2][1][1]),2)+pow((data[2][0][2]-data[2][1][2]),2));
	jarak6 = sqrt(pow((data[2][1][0]-data[2][2][0]),2)+pow((data[2][1][1]-data[2][2][1]),2)+pow((data[2][1][2]-data[2][2][2]),2));
	tot_jarak3 = jarak5+jarak6;
	
	printf("Panjang titik A-B = %f\n",jarak1);
	printf("Panjang titik B-C = %f\n",jarak2);
	printf("Panjang titik A-C = %f\n\n",tot_jarak1);
	
	printf("Panjang titik D-E = %f\n",jarak3);
	printf("Panjang titik E-F = %f\n",jarak4);
	printf("Panjang titik D-F = %f\n\n",tot_jarak2);
	
	printf("Panjang titik G-H = %f\n",jarak5);
	printf("Panjang titik H-I = %f\n",jarak6);
	printf("Panjang titik G-I = %f\n\n",tot_jarak3);
	 
	
	return 0;
}
