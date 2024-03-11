#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[100][100], m, n, i, j;
	//pt fiecare linie a unei matrice sa se scada din elementele sale valoarea minima de pe acea  linie
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
	printf("\n");
	int minL[100];
	for (i = 0; i < m; i++) {
		minL[i] = a[i][0];
		for (j = 1; j < n; j++)
			if (a[i][j] < minL[i])
				minL[i] = a[i][j];
	}

	printf("\n");
	for (i = 0; i < m; i++)
		printf("%d ", minL[i]);
	
	printf("\n\n");
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			a[i][j] = a[i][j] - minL[i];

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}

