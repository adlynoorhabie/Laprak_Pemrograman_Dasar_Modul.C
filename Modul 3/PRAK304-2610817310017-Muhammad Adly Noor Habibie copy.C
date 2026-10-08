#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);

	if (N > 99) {
		printf("Anda Menginput Melebihi Limit Bilangan\n");
	} 
	else if (N == 0) {
		printf("Nol\n");
	} 
	else if (N < 10) {
		printf("Satuan\n");
	} 
	else if (N < 20) {
		printf("Belasan\n");
	}
	else {
		printf("Puluhan\n");
	}

	return 0;
}