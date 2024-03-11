#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[100][100], m, n, i, j;

	scanf("%d", &m);
	scanf("%d", &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	int b[100][100], p;

	printf("Nr de coloane a lui b: ");
	scanf("%d", &p);

	for (i = 0; i < n; i++)
		for (j = 0; j < p; j++) {
			printf("b[%d][%d]= ", i, j);
			scanf("%d", &b[i][j]);
		}

	int k = 0, c[100][100];

	for (i = 0; i < m; i++)
		for (j = 0; j < p; j++) {
			c[i][j] = 0;
			for (k = 0; k < n; k++)
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
		}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < p; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}
}