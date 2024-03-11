#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main()
{
	//nr de aparitii a unei valori in matrice
	int m, n, i, j;
	scanf("%d", &m);
	scanf("%d",&n);

	int** a = (int**)malloc(m * sizeof(int*));
		for(i = 0; i < m; i++)
			 a[i] = (int*)malloc(n * sizeof(int));

	for(i=0;i<m;i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}

	int valoare, k = 0;
	scanf("%d", &valoare);

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] == valoare)
				k++;

	printf("%d",k);

	for (i = 0; i < m; i++)
		free(a[i]);
	free(a);
}