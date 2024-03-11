#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//Elem maxim dintr-un vector si pozitia primei si ultimei aparitii
	int v[100], i, n;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	int max = v[0];
	for (i = 1; i < n; i++)
		if (v[i] > max)
			max = v[i];

	printf("Maximul este %d", max);
	int primapoz;
	for (i = 0; i < n; i++) {
		if (v[i] == max) {
			printf("Prima aparitie este: %d", i);
			break;
		}
	}
	int upoz;
	for (i = 0; i < n; i++)
		if (v[i] == max)
			upoz = i;
	printf("\nUltima aparitie este: %d", upoz);
}