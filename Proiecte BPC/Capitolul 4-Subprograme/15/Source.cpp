#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void citire(int a[][100], int* m)
{
	int i, j;
	scanf("%d", m);
	for (i = 0; i < *m; i++)
		for (j = 0; j < *m; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
}

void afisare(int a[][100], int m)
{
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}

void put(int a[][100], int b[][100], int c[][100], int m, int putere)
{
	int k, i, j, q;
	for (q = 0; q < putere; q++)
	{
		for (i = 0; i < m; i++)
			for (j = 0; j < m; j++)
			{
				c[i][j] = 0;
				for (k = 0; k < m; k++)
					c[i][j] = c[i][j] + b[i][k] * a[k][j];
			}
		for (i = 0; i < m; i++)
			for (j = 0; j < m; j++)
				b[i][j] = c[i][j];
	}
}

int main()
{
	int a[100][100], m, i, j;
	citire(a, &m);
	afisare(a, m);
	int b[100][100]; int c[100][100], putere, q, k;
	for (i = 0; i < m; i++)
		for (j = 0; j < m; j++)
			if (i == j)
				b[i][j] = 1;
			else b[i][j] = 0;

	printf("Puterea la care vrem sa ridicam: ");
	scanf("%d", &putere);

	put(a, b, c, m, putere);

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}
}