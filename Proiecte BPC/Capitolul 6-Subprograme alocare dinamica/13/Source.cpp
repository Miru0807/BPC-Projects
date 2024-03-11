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
	for (i = 0; i < *m; i++)
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

void afisare(float** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%.2f ", a[i][j]);
		printf("\n");
	}
}

float* pestemedie(float** a, int m, int n,int *p,float *med)
{
	float* pmedie = (float*)malloc(m * sizeof(float));
	*p = 0;
	int i, j;
	for (i = 0; i < m; i++)
			if (med[i] >= 5000)
				pmedie[(*p)++] = i;

	return pmedie;
}

int main()
{
	int m, n, i, j;
	float** a = citire(&m, &n);
	afisare(a, m, n);
	float* med = vanzarimedii(a, m, n);
	
	
	printf("\n\n");
	for (i = 0; i < m; i++)
		printf("%.2f ", med[i]);
	
	printf("\n\n");
	
	int p;
	float* progmedie = pestemedie(a, m, n , &p, med);
	printf("Zilele in care au fost vanzari peste 5000 sunt :");
	for (i = 0; i < p; i++)
		printf("%.0f ", progmedie[i]);
}