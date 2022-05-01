#include "stdio.h"
int main(){
	int sayilar[] = { 10 , 20 , 30 , 40 , 50, 60 , 70 , 80};
	int index;
	//printf("%d",sayilar[1]);
	for(index=0; index<8; index++){
		printf("\n%d",sayilar[index]);
	}
	
	int sayi = 100;
	int toplam = 0;
	while(sayi>0) {
		toplam ++;
		sayi--;
		printf("\ntoplam: %d",toplam);
	}
	
	/*for(;;){
		printf(":)");
	}*/
	
	int i;
	printf("\n");
	for(i=0;;){
		printf("\n:)");
		if(i++ == 3) break;
	}
	
	int in;
	printf("\n");
	for(in=0;;){
		if(in++ %2 == 0) continue;
		if(in == 100) break;
		printf("%d ",i);
	}
	
	return 0;
}