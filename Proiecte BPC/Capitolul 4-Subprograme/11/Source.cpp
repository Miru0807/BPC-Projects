#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void citire(int a[][100], int *m, int *n)
{
	int i, j;
	scanf("%d", m);
	scanf("%d", n);
	for (i = 0; i < *m; i++)
		for (j = 0; j < *n; j++)
		{
			printf("a[%d][%d]= ",i, j);
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
void constant(int a[][100], int m, int n, int *k)
{
	*k = 0;
	int i, j, ok;

	for (i = 0; i < m; i++)
	{
		ok = 1;
		for (j = 1; j < n; j++)
			if (a[i][j] != a[i][0])
				ok = 0;
		if (ok)
			(*k)++;
	}
}

int main()
{
	//program pentru a determina numarul abonatilor cu consum constant
	int a[100][100], m, n, i, j;
	citire(a, &m, &n);
	afisare(a, m, n);
	int k;
	constant(a, m, n, &k);
	
	printf("Numarul abonatilor cu valori constante este: ");
	printf("%d ", k);
}