#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	//Elem maxim si maxim pe linie

	int a[100][100], m, n, i, j;

	scanf("%d", &m);
	scanf("%d", &n);
	int s = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	int max = a[0][0];

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			if (a[i][j] > max)
				max = a[i][j];
			
		}
	printf("\nMaximul este: %d\n", max);
	
	int max_l[100];

	for (i = 0; i < m; i++)
	{
		max_l[i] = a[i][0];
		for (j = 1; j < n; j++)
			if (a[i][j] > max_l[i])
				max_l[i] = a[i][j];
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}

	for (i = 0; i < m; i++)
		printf("Maximul de pe linia %d este %d\n", i, max_l[i]);
}