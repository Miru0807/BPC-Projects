#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[100][100], m, n, i, j;
	//Prod vectorial dintre fiecare 2 linii ale unei matrice
	scanf("%d", &m);
	scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	int k = 0,vect[100][100];

	int nr = 0;
	for(i=0;i<m-1;i++)
		for(j=i+1;j<m;j++) {
			for (k = 0; k < n; k++)
			
				vect[nr][k] = a[i][k] * a[j][k];
				nr++;
			}

	for (i = 0; i < nr; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", vect[i][j]);
		printf("\n");
	}
}