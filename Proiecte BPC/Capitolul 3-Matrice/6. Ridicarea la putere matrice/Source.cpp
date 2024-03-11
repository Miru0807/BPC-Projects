#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//Ridicarea unei matrice la putere 
	int a[100][100], m,  i, j;
	scanf("%d", &m);
	for (i = 0; i < m; i++)
		for (j = 0; j < m; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}

	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	int b[100][100]; int c[100][100], putere, q,k;
	for (i = 0; i < m; i++)
		for (j = 0; j < m; j++)
			if (i == j)
				b[i][j] = 1;
			else b[i][j] = 0;

	printf("Puterea la care vrem sa ridicam: ");
	scanf("%d", &putere);

	for (q = 0; q < putere; q++)
	{
		for(i=0;i<m;i++)
			for (j = 0; j < m; j++)
			{
				c[i][j] = 0;
				for (k = 0; k < m; k++)
					c[i][j] = c[i][j] + b[i][k] * a[k][j];
			}
		for (i = 0; i < m; i++)
			for (j = 0; j < m; j++)
				b[i][j] = c[i][j];
	}


	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}
}