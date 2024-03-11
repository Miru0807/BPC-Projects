#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[100][100], m, n, i, j;
	//Coloanele unei matrice cu elementele in progresie aritmetica
	scanf("%d", &m);
	scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	int ok = 1; int v[100], p = 0;
	for (j = 0; j < n; j++) {
		int ratie = a[1][j] - a[0][j];
		for (i = 1; i < m; i++)
			if (a[i][j] - a[i - 1][j] != ratie)
				ok = 0;

		if (ok)
			v[p++] = j;
	}
	for (i = 0; i < p; i++)
		printf("%d ", v[i]);
}