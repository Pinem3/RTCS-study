#define _CRT_SECURE_NO_WARNINGS
#define MAX 250
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char x[MAX];
	printf("Что вы хотите написать?\n");
	fgets(x, MAX, stdin);
	printf("Вы ввели: %s", x);
	return 0;
}
