#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[100][100], m, n, i, j;
	//Pt fiecare linie sa se calculeze produsul dintre cel mai mare si cel mai mic element
	scanf("%d", &m);
	scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	int min[100], max[100];

	for (i = 0; i < m; i++) {
		min[i] = a[i][0], max[i] = a[i][0];
		for (j = 1; j < n; j++)
		{
			if (a[i][j] > max[i])
				max[i] = a[i][j];
			if (a[i][j] < min[i])
				min[i] = a[i][j];
		}
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	int z[100];
	for (i = 0; i < m; i++)
		z[i] = max[i] * min[i];
	
	printf("\n");
	for (i = 0; i < m; i++)
		printf("%d ", z[i]);
}