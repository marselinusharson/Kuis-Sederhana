#include <stdio.h>

void main(){
	int keliling, luas;
	printf("Sebuah persegi panjang memiliki panjang 20 cm dan lebar 15cm.\n");
	printf("Berapakah keliling persegi panjang tersebut? ");
	scanf("%d", &keliling);
	printf("Berapakah luas lingkaran tersebut? ");
	scanf("%d", &luas);
	
	if (keliling == 70 && luas == 300){
		printf("Kamu dapat Nilai 100");
	}else if (keliling != 70 && luas == 300){
		printf("Kamu dapat Nilai 50");
	}else if(keliling == 70 && luas != 300){
		printf("Kamu dapat Nilai 50");
	}else{
		printf(" Kamu dapat Nilai 0");
	}
}
