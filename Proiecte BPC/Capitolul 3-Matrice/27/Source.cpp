#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int  m, n, i, j;
	float a[100][100];
	//se da matricea a, dc i<j bij=aij, dc  i>=j bij=(... ce scrie acolo)
	scanf("%d", &m);
	scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%f", &a[i][j]);
		}


	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%2.f ", a[i][j]);
		printf("\n");
	}
	printf("\n");

	float b[100][100];


	for (i = 0; i < m; i++) 
		for (j = 0; j < n; j++)
		{
			if (i < j)
				b[i][j] = a[i][j];
			if (i >= j)
				b[i][j] = (a[i][0] + a[i][n - 1] + a[0][j] + a[m - 1][j]) / 4;
		}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%2.f ", b[i][j]);
		printf("\n");
	}
	
}