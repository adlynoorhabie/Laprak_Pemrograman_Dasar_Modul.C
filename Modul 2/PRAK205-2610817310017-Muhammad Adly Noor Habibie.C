#include <stdio.h>
#include <math.h>

int main(void) {
	double A, B;
	double base, height, perimeter, area;

	scanf("%lf %lf", &A, &B);

	base = pow(B * B - A * A, 0.5);
	height = (A);
	perimeter = (base + height + B);
	area = ((base * height) / 2);

	printf("Alas = %g cm\n", base);
	printf("Tinggi = %g cm\n", height);
	printf("Keliling = %g cm\n", perimeter);
	printf("Luas = %g cm^2\n", area);

	return 0;
}