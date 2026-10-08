#include <stdio.h>

int main(void) {
	double radius, height;
	double phi = 22.0 / 7.0;
	double volume, surface_area, circumference;

	scanf("%lf %lf", &radius, &height);

	volume = (phi * radius * radius * height);
	surface_area = (2 * phi * radius * (radius + height));
	circumference = (2 * phi * radius);

	printf("Volume = %.2f\n", volume);
	printf("Luas = %.2f\n", surface_area);
	printf("Keliling = %.2f\n", circumference);

	return 0;
}