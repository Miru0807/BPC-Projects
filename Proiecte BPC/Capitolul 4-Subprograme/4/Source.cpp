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

int cmmdc(int v[],int n)
{
	int i, a, b;
	if (n == 1)
		printf("%d ", v[0]);
	else {
		a = v[0];
		for (i = 1; i < n; i++)
			b = v[i];
		while (a != b) {
			if (a > b)
				a = a - b;
			else b = b - a;
		}
		return a;
	}
}

int main()
{
	int v[100], i, n;
	citire(v, &n);
	afisare(v, n);
	int k = cmmdc(v, n);
	printf("\n\nCmmdc este: %d ", k);
}