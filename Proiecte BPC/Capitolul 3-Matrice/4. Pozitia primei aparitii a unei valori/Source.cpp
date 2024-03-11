#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	//pozitia primei aparitii
	int primaaparitie;
	int a[100][100], m, n, i, j;

	scanf("%d", &m);
	scanf("%d", &n);
	int s = 0;
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

	int gasit = 0;
	int valoare;
	printf("Valoarea cautata este: ");
	scanf("%d", &valoare);
	
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			if (a[i][j] == valoare)
				printf("Prima aparitie este pe pozitia %d %d", i, j);
		break;
	}
}