#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//Sa se interschimbe elem de pe diagonala principala prin interschimbari de linii si coloane
	//Nu inteleg unde e greseala..nu da eroare dar nu face ce trb
	int a[100][100], m, n, i, j, aux;
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

	int sortat;
	do {
		sortat = 0;
		for (i = 0; i < n - 1; i++)
			if (a[i][i] > a[i + 1][i + 1]) {
				sortat = 1;
				int l = i, l1 = i + 1;
				for (j = 0; j < n; j++) {
					aux = a[l][j];
					a[l][j] = a[l1][j];
					a[l1][j] = aux;
				}

				for (j = 0; j < n; j++) {
					aux = a[j][l];
					a[j][l] = a[j][l1];
					a[j][l1] = aux;
				}
			}
	} while (sortat);

	printf("\n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	
}
	