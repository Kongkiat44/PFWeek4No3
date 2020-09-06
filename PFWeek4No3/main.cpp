#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int THB = 0;
	float USD = 0, b = 0;
	printf("Enter your money in Baht: ");
	scanf("%d", &THB);
	if (THB > 0) {
		USD = (float)(THB) / (32.80);
		if (USD >= 1) {
			b = (int)(USD) * (0.30);
			printf("%d Baht can trade to %.2f USD and the bank gets %.2f Baht as a profit\n", THB, USD, b);
		}
		else printf("%d Baht can trade to %.2f USD and the bank doesn't get any profit\n", THB, USD);
	}
	else printf("You don't have \"money !\"\n");
	return 0;
}