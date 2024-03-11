#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void citire(int a[][100], int* m, int* n)
{
	int i, j;
	scanf("%d", m);
	scanf("%d", n);
	for(i=0;i<*m;i++)
		for (j = 0; j < *n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
}
 
void afisare(int a[][100], int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}

void swap(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void ordonare(int a[][100], int m, int n)
{
	int i, j;
	int k;

	for (i = 0; i < m; i++)
		for (j = 0; j < n-1; j++)
			for (k = j + 1; k < n ; k++)
				if (a[i][j] > a[i][k])
					swap(&a[i][j], &a[i][k]);
}

int main()
{
	int a[100][100], m, n, i, j;
	citire(a, &m, &n);
	afisare(a, m, n);

	ordonare(a, m, n);
	printf("\n\nMatricea cu liniile ordonate este: \n\n");
	afisare(a, m, n);
}
