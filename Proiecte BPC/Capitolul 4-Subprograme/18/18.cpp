#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void citire(int a[][100], int* m, int* n)
{
	int i, j;
	scanf("%d", m);
	scanf("%d", n);
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
void descresc(int a[][100], int m, int n, int y[100], int* k)
{
	int i, j, ok;
	*k = 0;
	for (i = 0; i < m; i++)
	{
		ok = 1;
		for (j = 0; j < n - 1; j++)
			if (a[i][j] < a[i][j + 1])
				ok = 0;
		if (ok)
			y[(*k)++] = i;
	}
	
}


int main()
{  //produsele cu consumuri in progresie aritmetica
	int a[100][100], m, n, i, j;
	citire(a, &m, &n);
	afisare(a, m, n);

	int k; int y[100];
	descresc(a, m, n, y, &k);
	for (i = 0; i < k; i++)
		printf("%d ", y[i]);


}