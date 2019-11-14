#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int data[]={1,31,22,30,23,4,18,6,5,3};
int i,j,temp;
//fungsi bubble sort ascending
void bubbleSortAsc(){
	for(i=0; i<10-1; i++){
		for(j=0; j<10-1; j++){
			if(data[j+1]<data[j]){
				temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	}
}
//fungsi bubble sort descending
void bubbleSortDesc(){
	for(i=0; i<10-1; i++){
		for(j=0; j<10-1; j++){
			if(data[j+1]>data[j]){
				temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	}
}

int main(){
	int i,j;
	printf("=============================================\n");
	printf("		PROGRAM BUBBLE SORT \n");
	printf("=============================================\n");
	printf("Sebelum diurutkan : \n");
	for(i=0; i<10; i++){
		printf("%d ", data[i]);
	}
	bubbleSortAsc();
	printf("\n\n===========Sorting Ascending============ \n");
	for(i=0; i<10; i++){
		printf("%d ", data[i]);
	}
	bubbleSortDesc();
	printf("\n\n===========Sorting Descending=========== \n");
	for(i=0; i<10; i++){
		printf("%d ", data[i]);
	}
	getchar();
	return 0;
}
