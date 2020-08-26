#include<stdio.h>
int main() {
	int k, space, i, n, j;
	scanf_s("%d", &n);
	for (i = n - 1; i > 0; i--) {
		for (k = 2; k <= n - i + 1; k++) {
			printf("* ");
		}
		for (space = 1; space <= 2 * i - 1; space++) {
			printf("  ");
		}
		for (k = 2; k <= n - i + 1; k++) {
			printf("* ");
		}
		printf("\n");
	}
	for (j = 1; j <= 2 * n - 1; j++) {
		printf("* ");
	}
	printf("\n");
	for (i = 1; i <= n; i++) {
		for (k = 2; k <= n - i + 1; k++) {
			printf("* ");
		}
		for (space = 1; space <= 2 * i - 1; space++) {
			printf("  ");
		}
		for (k = 2; k <= n - i + 1; k++) {
			printf("* ");
		}
		printf("\n");
	}
}