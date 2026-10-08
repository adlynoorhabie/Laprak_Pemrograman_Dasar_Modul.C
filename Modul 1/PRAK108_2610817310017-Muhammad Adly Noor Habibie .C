#include <stdio.h>

int main() 
{
	int Mileage = (14);
	int Surrounding_Park = (5);
	double Park_Radius = (Mileage / (2.0 * 3.14 * Surrounding_Park));

	printf("diketahui:\n");
	printf("Pak Dengklek mengelilingi taman = %d Putaran\n", Surrounding_Park);
	printf("Jarak tempuh Pak Dengklek = %d Kilometer\n", Mileage);
	printf("\n");
	printf("Jawaban:\n");
	printf("Jari-jari taman yang dikelilingi adalah: %.2f\n", Park_Radius);

	return 0;
}