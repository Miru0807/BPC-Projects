#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void citire(int v[], int* n)
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

int cmmdc(int a, int b)
{
	
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else b = b - a;
	}
	return a;
}
void prime(int v[], int n, int  *k)
{
	*k = 0;
	int i ,j;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (cmmdc(v[i], v[j]) == 1)
				(*k)++;

}
int main()
{
	int v[100], i, n;
	citire(v, &n);
	afisare(v, n);
	int k;
	prime(v, n, &k);
	printf("\n\n%d ", k);
}