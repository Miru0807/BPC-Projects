#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[100][100], m, n, i, j;
	//Zilele in care nu s-au inregistrat vanzari
	scanf("%d", &m);
	scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}

	int v[100], p = 0;
	
	int ok;
	for (j = 0; j < n; j++)
	{
		ok = 1;
		for (i = 0; i < m; i++)
			if (a[i][j] != 0)
				ok = 0;
		if (ok)
			v[p++] = j;
	}

	for (i = 0; i < p; i++)
		printf("%d ", v[i]);
}