#include <stdio.h>

int main() 
{
	int YuZhong_Soldier = (958730);
	int Hero_Amount = (5);
	double Enemy_Per_Hero = ((double)YuZhong_Soldier / Hero_Amount);

	printf("Pasukan yang dibawa Yu Zhong = %d\n", YuZhong_Soldier);
	printf("Jumlah pahlawan = %d\n", Hero_Amount);
	printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %.0f pasukan\n",Enemy_Per_Hero);

	return 0;
}