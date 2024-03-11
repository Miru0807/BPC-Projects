#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>


int* citire(int* n)
{
	int i;
	scanf("%d", n);
	int* v = (int*)malloc((*n) * sizeof(int));
	for (i = 0; i < *n; i++) {
		printf("vector[%d]= ", i);
		scanf("%d", &v[i]);
	}
	return v;
}
void afisare(int* v, int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}
}
int* produsvect(int *v,int *y,int n)
{
	int* z = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
		z[i] = v[i] * y[i];


	return z;
}

int main()
{//citirea unui vector cu subprogame, dinamic
	int n;
	int* v = citire(&n);
	afisare(v, n);
	printf("\n\n");
	int* y = citire(&n);
	afisare(y, n);

	printf("\n\n");
	int *z=produsvect(v, y, n);
	for (int i = 0; i < n; i++)
		printf("%d ", z[i]);
	free(z); free(v); free(y);
}