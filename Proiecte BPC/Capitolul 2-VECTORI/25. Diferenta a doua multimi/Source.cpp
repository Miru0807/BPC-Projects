#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//Diferenta dintre 2 multimi
	int x[100], i, j, aux, k, n;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("x[%d]= ", i);
		scanf("%d", &x[i]);
	}
	int y[100], m, z[100], p;

	printf("Dimensiunea celui de-al doilea vector este : ");
	scanf("%d", &m);

	for (j = 0; j < m; j++) {
		printf("y[%d]= ", j);
		scanf("%d", &y[j]);
	}

	i = 0, j = 0, p = 0;

	for (i = 0; i < n; i++)
	{
		j = 0;
		while (j < m && x[i] != y[j])
			j++;
		if (j == m)
			z[p++] = x[i];
	}
	for (i = 0; i < p; i++)
		printf("%d ", z[i]);
}
