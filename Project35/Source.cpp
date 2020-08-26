#include<stdio.h>
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int i, j;
	int number[2];
	for (i = 0; i < 2; i++) {
		scanf_s("%d", &number[i]);
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2 - i; i++) {
			if (number[j] > number[j + 1]) {
				swap(&number[j], &number[j + 1]);
			}
		}
	}
	for (i = 0; i < 2; i++) {
		printf("%d\t", number[i]);
	}
	return 0;
}