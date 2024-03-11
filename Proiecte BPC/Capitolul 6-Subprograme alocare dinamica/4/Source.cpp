#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>


int* intersectie(int* v, int* y, int m, int n, int* p)
{
	*p = 0; int i, j;
	int* z = (int*)malloc(n * sizeof(int));

	for (i = 0; i < n; i++) {
		j = 0;
		while (j < n && y[j] != v[i])
			j++;
		if (j < n)
			z[(*p)++] = v[i];
	}
	return z;
}

int main()
{
	int m, n, i, j;

	scanf("%d", &n);
	int* v = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	scanf("%d", &m);
	int* y = (int*)malloc(m * sizeof(int));
	for (i = 0; i < m; i++) {
		printf("y[%d]= ", i);
		scanf("%d", &y[i]);
	}
	int p;
	int* z = intersectie(v, y, m, n, &p);

	for (i = 0; i < p; i++)
		printf("%d ", z[i]);



}