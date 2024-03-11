#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void citire(int a[][100], int* m, int* n)
{
	int i, j;
	scanf("%d", m);
	scanf("%d", n);
	for (i = 0; i < *m; i++)
		for (j = 0; j < *n; j++)
		{
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
void nule(int a[][100], int m, int n, int y[100], int* k)
{
	*k = 0;
	int i, j, ok;

     
	for (j = 0; j < n; j++)
	{
		ok = 1;
		for (i = 0; i < m; i++)
			if (a[i][j] != 0)
				ok = 0;
		if (ok)
			y[(*k)++] = j;
	}
}

int main()
{
	//zilele cu consumuri nule-adica coloanele cu numai 0
	int a[100][100], m, n, i, j;
	citire(a, &m, &n);
	afisare(a, m, n);
	int k; int y[100];
	nule(a, m, n, y, &k);
	for (i = 0; i < k; i++)
		printf("%d ", y[i]);
}