#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main()
{
	//interclasarea a doi vectori
	int i, j, m, n;
	printf("Dimensiunea primului vector: ");
	scanf("%d", &m);
	int* x = (int*)malloc(m * sizeof(int));
	for (i = 0; i < m; i++) {
		printf("x[%d]= ", i);
		scanf("%d", &x[i]);
	}
	printf("Dimensiunea celui de-al doilea vector: ");
	scanf("%d", &n);
	int* y = (int*)malloc(n * sizeof(int));
	for (j = 0; j < n; j++) {
		printf("y[%d]= ", j);
		scanf("%d", &y[j]);
	}
	int p;
	int* z = (int*)malloc((m + n) * sizeof(int));

	i = 0; j = 0; p = 0;
	
	while (i < m && j < n)
		if (x[i] < y[j])
			z[p++] = x[i++];
		else z[p++] = y[j++];

	while (i < m) z[p++] = x[i++];
	while (j < n) z[p++] = y[j++];

	for (i = 0; i < p; i++)
		printf("%d ", z[i]);

	free(x); free(y); free(z);
}