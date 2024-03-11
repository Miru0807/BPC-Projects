#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//Sortarea elem unei matrice--o transf in vector, il ordonez si apoi transf vectorul in matrice
	int a[100][100], m, n, i, j,aux;
	scanf("%d", &m);
	scanf("%d", &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	int v[100], k = 0;

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			v[k++] = a[i][j];

	for (i = 0; i < k-1; i++)
		for(j=i+1;j<k;j++)
			if (v[i] > v[j]) {
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
	printf("\n");
	for (i = 0; i <k; i++)
		printf("%d ", v[i]);
	printf("\n");

		k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			a[i][j] = v[k++];

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

}