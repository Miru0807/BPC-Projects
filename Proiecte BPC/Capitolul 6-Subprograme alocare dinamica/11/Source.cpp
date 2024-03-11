#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

float** citire(int* m, int* n)
{

	int i, j;
	scanf("%d", m);
	scanf("%d", n);
	float** a = (float**)malloc((*m) * sizeof(float*));
	for (i = 0; i < *m; i++)
		a[i] = (float*)malloc((*n) * sizeof(float));
	for(i=0;i<*m;i++)
		for (j = 0; j < *n; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%f", &a[i][j]);
		}
	return a;
}

float* vanzarimedii(float** a, int m, int n)
{
	int i, j;
	float* med = (float*)malloc(m * sizeof(float));

	for (i = 0; i < m; i++) {
		med[i] = 0;
		for (j = 0; j < n; j++)
			med[i] = med[i] + a[i][j];
		med[i] = med[i] / n;
	}
	return med;
}

void afisare(float **a, int m, int n)
{
	for (int	 i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%.2f ", a[i][j]);
		printf("\n");
	}
}

int main()
{
	int m, n, i, j;
	float** a = citire(&m, &n);
	afisare(a, m, n);
	float *med = vanzarimedii(a, m, n);

	for (i = 0; i < m; i++)
		printf("%.2f ", med[i]); 
}