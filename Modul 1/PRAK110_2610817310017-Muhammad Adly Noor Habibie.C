#include <math.h>
#include <stdio.h>

int main() 
{
	double base = (5);
	double tall = (12);

	double hypotenuse = (sqrt(base * base + tall * tall));
	double Around = (base + tall + hypotenuse);
	double wide = (0.5 * base * tall);

	printf("Diketahui :\n");
	printf("Alas = %.0f cm\n", base);
	printf("Tinggi = %.0f cm\n", tall);
	printf("\n");
	printf("Jawab :\n");
	printf("Sisi A = %.0f cm\n", base);
	printf("Sisi B = %.0f cm\n", tall);
	printf("Sisi C = %.0f cm\n", hypotenuse);
	printf("Keliling = %.0f cm\n", Around);
	printf("Luas = %.0f cm^2\n", wide);

	return 0;
}