#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//Vector*matrice 
	int a[100][100], m,n, i, j;
	scanf("%d", &m);
	scanf("%d", &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}

	int v[100];

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}
	int c[100];
	for (j = 0; j < n; j++)
	{
		c[j] = 0;
		for (i = 0; i < m; i++)
			c[j] = c[j] + v[i] * a[i][j];
	}

	for (i = 0; i < n; i++)
		printf("%d ", c[i]);

}