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

void compactare(int v[], int *n)
{
	int i, j,k;
	for(i=0;i<(*n)-1;i++)
		for(j=i+1;j<(*n);j++)
			if(v[i]==v[j])
			{
				for (k = j; k < (*n) - 1; k++)
					v[k] = v[k + 1];
				(*n)--; j--;
				}
}

int main()
{
	int v[100], n, i;
	citire(v, &n);
	afisare(v, n);

	compactare(v, &n);

	printf("\n");
	for (int i = 0; i < n; i++)
		printf("%d ", v[i]);
}
