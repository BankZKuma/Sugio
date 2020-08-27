#include<stdio.h>
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int i, j;
	int number[10];
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &number[i]);
	}
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 9 - i; j++) {
			if (number[j] > number[j + 1]) {
				swap(&number[j], &number[j + 1]);
			}
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d\t", number[i]);
	}
	return 0;
}
