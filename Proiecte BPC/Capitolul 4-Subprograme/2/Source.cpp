#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void citire(int v[], int *n)
{
	int i;
	scanf("%d", n);
	for (i = 0; i < *n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}
}
void afisare(int v[], int n)
{
	for (int i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}
}

void nule(int v[], int n, int y[], int* k)
{
	*k = 0; int i; int ok = 1;

	for (i = 0; i < n; i++)
		if (v[i] == 0)
			y[(*k)++] = i;

}

void main()
{
	int v[100], n, i;
	citire(v, &n);
	//afisare(v, n);
	int y[100], k;
	nule(v, n, y, &k);
	for (i = 0; i < k; i++)
		printf("%d ", y[i]);
}