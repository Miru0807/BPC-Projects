#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//Produsul vectorial dintre 2 vectori

	int v[100], n, i, aux;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	int y[100], j;

	for (i = 0; i < n; i++) {
		printf("y[%d]= ", i);
		scanf("%d", &y[i]);
	}
	int prodscalar = 0;

	for (i = 0; i < n; i++)
		prodscalar = prodscalar + v[i] * y[i];

	printf("%d ", prodscalar);
}