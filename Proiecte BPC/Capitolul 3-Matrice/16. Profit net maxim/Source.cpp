#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[100][100], m, n, i, j;
	//Societati cu profit maxim
	scanf("%d", &m);
	scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	int max = a[0][0];
	for (i = 0; i < m; i++) 
		for (j = 0; j < n; j++)
			if (a[i][j] > max)
				max = a[i][j];
	
	int v[100], p = 0; int gasit = 0;
	for (i = 0; i < m; i++) {
		gasit = 0;
		for (j = 0; j < n && gasit == 0; j++)
			if (a[i][j] == max)
				gasit = 1;
		if (gasit)
			v[p++] = i;
	}

	for (i = 0; i < p; i++)
		printf("%d ", v[i]);
	}

