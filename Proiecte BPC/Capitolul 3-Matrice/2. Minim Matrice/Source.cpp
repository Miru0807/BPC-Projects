#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	//Elem maxim si minim

	int a[100][100], m, n, i, j;

	scanf("%d", &m);
	scanf("%d", &n);
	int s = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	int max = a[0][0], min = a[0][0];

	for(i=0;i<m;i++)
		for (j = 0; j < n; j++) {
			if (a[i][j] > max)
				max = a[i][j];
			if (a[i][j] < min)
				min = a[i][j];
		}

	printf("\nMaximul este: %d", max);
	printf("\nMinimul este %d", min);
}