#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//Program care elimina dintr-un vector toate elementele egale cu o valoare
	int  i, j, aux, k, n;
	int x[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("x[%d]= ", i);
		scanf("%d", &x[i]);
	}

	int valoare;
	scanf("%d", &valoare);
	for(i=0;i<n;i++)
		if (x[i] == valoare) {
			for (k = i; k < n - 1; k++)
				x[k] = x[k + 1];
			n--; i--;
		}

	for (i = 0; i < n; i++)
		printf("%d ", x[i]);
}