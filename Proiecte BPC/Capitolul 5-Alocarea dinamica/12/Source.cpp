#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

void crescatoare(int **a, int m, int n, int *k)
{
	*k = 0;
	int i, j;	
	int ok = 1;
	for (i = 0; i < m; i++) {
		ok = 1;
		for (j = 0; j < n - 1; j++)
			if (a[i][j] > a[i][j + 1])
				ok = 0;
		if (ok)
			(*k)++;
	}

}

int main()
{
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
	crescatoare(a, m, n, &k);
	printf("%d", k);
}