#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void citire(int a[][100], int* m, int* n)
{
	int i, j;
	scanf("%d", m);
	scanf("%d", n);
	for (i = 0; i < *m; i++)
		for (j = 0; j < *n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
}
void afisare(int a[][100], int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
void mediu(int a[][100],int m, int n, float y[100],int *k)
{
	*k = 0;
	int i, j;
	for (j = 0; j < n; j++) {
		y[j] = 0; *k = 0;
		for (i = 0; i < m; i++)
			if (a[i][j] != 0) {
				y[j] = y[j] + a[i][j];
				(*k)++;
			}
		y[j] = y[j] / (*k);
	}
}


int main()
{  //consumul mediu in fiecare zi
	int a[100][100], m, n, i, j;
	citire(a, &m, &n);
	afisare(a, m, n);

	int k; float y[100];
	mediu(a, m, n, y, &k);
	for (i = 0; i < m; i++)
		printf("%.2f ", y[i]);


}