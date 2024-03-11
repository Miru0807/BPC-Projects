#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void citire(int a[][100], int* m, int* n)
{
	scanf("%d", m);
	scanf("%d", n);
	int i, j;
	for (i = 0; i < *m; i++)
		for (j = 0; j < *n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
}
void afisare(int a[][100], int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
void inmultire(int a[][100],int b[][100],int c[][100],int m, int n, int p)
{
	int k;
	int i, j;
	for (i = 0; i < m; i++)
		for (j = 0; j < p; j++) {
			c[i][j] = 0;
			for (k = 0; k < n; k++)
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
		}
}
int main()
{
	//inmultirea dintre 2 matrice
	int a[100][100], m, n, i, j;

	citire(a, &m, &n);
	afisare(a, m, n);
	int b[100][100], p;

	printf("Nr de coloane a lui b: ");
	scanf("%d", &p);

	for (i = 0; i < n; i++)
		for (j = 0; j < p; j++) {
			printf("b[%d][%d]= ", i, j);
			scanf("%d", &b[i][j]);
		}

	int c[100][100];
	
	inmultire(a, b, c, m, n, p);

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < p; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}
}