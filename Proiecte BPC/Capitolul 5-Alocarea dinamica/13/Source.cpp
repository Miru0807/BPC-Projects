#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main()
{

	//determinarea masinilor cu consumuri crescatoare
	int m, n, i, j;
	scanf("%d", &m);
	scanf("%d", &n);
	int** a = (int**)malloc(m * sizeof(int*));
	for (i = 0; i < m; i++)
		a[i] = (int*)malloc(n * sizeof(int));
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	int k;
	k = 0;
	
	int ok = 1;
	int* v = (int*)malloc(m * sizeof(int));

	for (i = 0; i < m; i++) {
		ok = 1;
		for (j = 0; j < n - 1; j++)
			if (a[i][j] > a[i][j + 1])
				ok = 0;
		if (ok)
			v[k++] = i;
	}
	for (i = 0; i < k; i++)
		printf("%d ", v[i]);

	free(v);
	for (i = 0; i < n; i++)
		free(a[i]);
	free(a);

}