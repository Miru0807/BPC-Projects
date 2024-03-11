#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main()
{//determinarea pozitiilor tuturor aparitiilor unei valori intr-un vector
	int i, n;
	scanf("%d", &n);
	int* v = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	int valoare;
	scanf("%d",&valoare);

		for (i = 0; i < n; i++)
			if (v[i] == valoare)
				printf("%d ", i);

		free(v);
}