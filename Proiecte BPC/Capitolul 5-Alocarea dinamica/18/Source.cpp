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
	//minim din triunghiul din stanga diagonalelor
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
	int min = 999;
	afisare(a, m);

	for (i = 0; i < m; i++)
		for (j = 0; j < m; j++)
			if (i > j && i + j < m - 1)
				if (a[i][j] < min)
					min = a[i][j];
	printf("%d\n\n", min);


	for (i = 0; i < m; i++)
		free(a[i]);
	free(a);
}


