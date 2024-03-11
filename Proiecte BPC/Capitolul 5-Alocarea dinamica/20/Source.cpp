#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
#include <malloc.h>

void afisare(int** a, int m) {
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
int main()
{
	//prod vectorial dintre diagonalele unei matrice
	int m, i, j;
	scanf("%d", &m);

	int** a = (int**)malloc(m * sizeof(int*));
	for (i = 0; i < m; i++)
		a[i] = (int*)malloc(m * sizeof(int));

	for (i = 0; i < m; i++)
		for (j = 0; j < m; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	int* z = (int*)malloc(m * sizeof(int));
	afisare(a, m);
	for (i = 0; i < m; i++)
		z[i] = a[i][i] * a[i][m - i - 1];

	for (i = 0; i < m; i++)
		printf("%d ", z[i]);

	free(z);
	for (i = 0; i < m; i++)
		free(a[i]);
	free(a);
}


