#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[100][100], m, n, i, j;
	//Tranpusa
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
	int b[100][100];

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			b[i][j] = a[j][i];

	
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}

}