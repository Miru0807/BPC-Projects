#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main()
{

	//vector*matrice
	int m, n, i, j;
	scanf("%d", &m);
	scanf("%d", &n);
	int** a = (int**)malloc(m * sizeof(int*));
	for (i = 0; i < m; i++)
		a[i] = (int*)malloc(n * sizeof(int));
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	int k;
	k = 0;

	int ok = 1;
	int* v = (int*)malloc(m * sizeof(int));
	for (i = 0; i < m; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}   

	int* c = (int*)malloc(n * sizeof(int));

	for (j = 0; j < n; j++) {
		c[j] = 0;
		for (i = 0; i < n; i++)
			c[j] = c[j] + v[i] * a[i][j];
	}

	for (j=0;j<n; j++)
		printf("%d ", c[j]);

	free(v); free(c);
	for (i = 0; i < m; i++)
		free(a[i]);
	free(a);

}