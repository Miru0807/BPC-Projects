#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[100][100], m, n, i, j;
	//Sa se sorteze prima linie a unei matrice fara  a schimba structura coloanelor
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
	}printf("\n");
	int aux;
	for (i = 0; i < m; i++)
		for (j = 0; j < n - 1; j++)
			if (a[0][j] > a[0][j + 1])
			{
				aux = a[0][j];
				a[0][j] = a[0][j + 1];
				a[0][j + 1] = aux;
			}

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}


}