#include <stdio.h>

int main() 
{
	int side1 = (4);
	int side2 = (5);
	int side3 = (7);
	int land_price = (85000);
	int land_around = (side1 + side2 + side3);

	printf("Diketahui :\n");
	printf("Panjang sisi segitiga berturut-turut adalah %d, %d dan %d\n", side1, side2, side3);
	printf("Keliling Tanah Pak Dangklek adalah %d\n", land_around);
	printf("Harga tanah per meter adalah %d\n", land_price);
	printf("Jawaban :\n");
	printf("Biaya yang diperlukan Pak Dengklek adalah : %d\n", land_price * land_around);

	return 0;
}