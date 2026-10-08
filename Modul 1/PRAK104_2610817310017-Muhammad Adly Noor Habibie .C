 #include <stdio.h>

int main() 
{
	double shoes_price_a = (400000);
	double shoes_price_b = (350000);

	double discount_13_percent = shoes_price_a * 0.13;
	double total_price_a = shoes_price_a - discount_13_percent;
	double discount_21_percent = shoes_price_b * 0.21;
	double total_price_b = shoes_price_b - discount_21_percent;

	printf("Harga sepatu A adalah %.0f\n", shoes_price_a);
	printf("Harga sepatu B adalah %.0f\n", shoes_price_b);
	printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n", total_price_a);
	printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f\n", total_price_b);

	return 0;
}