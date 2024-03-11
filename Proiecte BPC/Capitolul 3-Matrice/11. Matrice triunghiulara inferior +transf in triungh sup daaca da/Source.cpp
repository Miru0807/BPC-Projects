#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//Sa se verifice daca o matrice e triunghiulara inferior, in caz afirmativ sa fie transf in triunghiulara superios
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

	int ok = 1;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (i < j)
				if (a[i][j] != 0)
					ok = 0;
	if (ok)
		printf("\nMatricea e triunghiulara inferior\n");
	else printf("\nNU");

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			a[i][j] = a[j][i];

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (i > j)
				a[i][j] = 0;
	if (ok)
		printf("\nMatricea triunghiulara superior transformata este: \n\n");
	if (ok)
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++)
				printf("%d ", a[i][j]);
			printf("\n");
		}
}