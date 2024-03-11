#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main()
{

	//matrice*vector
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
	int* v = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
         }

	int* c = (int*)malloc(m * sizeof(int));

	for (i = 0; i < n; i++) {
		c[i] = 0;
		for (j = 0; j < n; j++)
			c[i] = c[i] + a[i][j] * v[j];
	}

	for (i = 0; i < m; i++)
		printf("%d ", c[i]);


}