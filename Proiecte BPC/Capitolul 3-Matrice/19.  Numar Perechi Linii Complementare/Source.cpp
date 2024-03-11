#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[100][100], m, n, i, j;
	//Fie o matrice cu m linii si n coloane cu elem 0 si 1
	// sa se det nr de perechi de linii complemenater
	//adica suma elem de pe acceasi coloana e 1
	scanf("%d", &m);
	scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	int k = 0;
	int sumaC[100]; int ok = 1;
	for (j = 0; j < n; j++) {
		ok = 1;
		sumaC[j] = 0;
		for (i = 0; i < m; i++)
			sumaC[j] += a[i][j];
		if (sumaC[j] != 1)
			ok = 0;
		if (ok)
			k++;
	}
	printf("%d ", k);
}