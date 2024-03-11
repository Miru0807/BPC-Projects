#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//interclasarea a doi vectori

	int x[100], n, i, aux;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("x[%d]= ", i);
		scanf("%d", &x[i]);
	}

	int y[200], j, m;
	printf("Dimensiunea celui de-al doilea vector este: ");
	scanf("%d", &m);

	for (j = 0; j < m; j++) {
		printf("y[%d]= ", j);
		scanf("%d", &y[j]);
	}
	i = 0; j = 0; int p = 0;
	int z[300];

	while (i < n && j < m)
		if (x[i] < y[i])
			z[p++] = x[i++];
		else z[p++] = y[j++];

	while (i < n) z[p++] = x[i++];
	while (j < n) z[p++] = y[j++];

	for (i = 0; i < p; i++)
		printf("%d ", z[i]);
}