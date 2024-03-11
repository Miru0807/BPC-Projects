#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[100][100], m, n, i, j;
	//Elem maxim din triunghiul de sub diagonale
	scanf("%d", &m);
	scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	int max = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (i > j && i + j > n - 1)
				if (a[i][j] > max)
					max = a[i][j];

	printf("%d", max);
}