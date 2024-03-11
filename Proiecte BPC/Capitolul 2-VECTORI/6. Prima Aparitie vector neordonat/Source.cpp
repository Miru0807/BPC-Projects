#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{ //Prima aparitie a unei valori intr-un vector
	int v[100], n, i, val;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	printf("Valoarea cautata este: ");
	scanf("%d", &val);

	for (i = 0; i < n; i++)
		if (v[i] == val)
			break;
	printf("Prima aparitie este: %d", i);
}