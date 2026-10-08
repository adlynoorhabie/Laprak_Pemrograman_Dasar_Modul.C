#include <stdio.h>

int main(void) {
	long long total_seconds;

	scanf("%lld", &total_seconds);

	long long days = (total_seconds / 86400);
	long long remaining_seconds = (total_seconds % 86400);
	long long hours = (remaining_seconds / 3600);

	remaining_seconds %= 3600;

	long long minutes = (remaining_seconds / 60);
	long long seconds = (remaining_seconds % 60);

	if (days > 0) {
		printf("%lld hari %02lld:%02lld:%02lld\n", days, hours, minutes, seconds);
	} 
    else {
		printf("%02lld:%02lld:%02lld\n", hours, minutes, seconds);
	}

	return 0;
}