#include <stdio.h>

int main(void) {
	double FN, SN, result;

	printf("Masukkan Nilai Pertama :");
	scanf("%lf", &FN);
	printf("Masukkan Nilai Kedua :");
	scanf("%lf", &SN);

	result = FN + SN;

	printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n",FN, SN, result);

	return 0;
}