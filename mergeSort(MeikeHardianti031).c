#include <stdio.h>
#include <stdlib.h>
#define max 10

int a[11] = { 31, 16, 1, 26, 27, 55, 50, 3, 40, 14, 0 };
int b[10];

void merge(int bawah, int tengah, int atas) 
	{
		int l1, l2, i;
		for(l1 = bawah, l2 = tengah + 1, i = bawah; l1 <= tengah && l2 <= atas; i++) {
      		if(a[l1] <= a[l2])
        		b[i] = a[l1++];
    		else
         		b[i] = a[l2++];
  		}
   			while(l1 <= tengah)    
      				b[i++] = a[l1++];
   			while(l2 <= atas)   
      				b[i++] = a[l2++];
   			for(i = bawah; i <= atas; i++)
      				a[i] = b[i];
}

void sort(int bawah, int atas) 
	{
   		int tengah;
   
   			if(bawah < atas){
		    	tengah = (bawah + atas) / 2;
		    	sort(bawah, tengah);
		    	sort(tengah+1, atas);
		    	merge(bawah, tengah, atas);
   		}	 
   			else { 
      	return;
   		}   
   }

int main() 
{ 
		int i;
		printf("List Sebelum diUrutkan\n");
		for(i = 0; i <= max; i++)
      		printf("%d ", a[i]);
			sort(0, max);
			printf("\n\nList Setelah di Urutkan\n");
   
   		for(i = 0; i <= max; i++)
      		printf("%d ", a[i]);
}
