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
	int prodvect[100];

	for (i = 0; i < n; i++)
		prodvect[i] = v[i] * y[i];

	for (i = 0; i < n; i++)
		printf("%d ", prodvect[i]);
}