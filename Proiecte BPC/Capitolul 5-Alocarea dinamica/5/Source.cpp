#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

void swap(int* a, int* b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
		
int main()
{
	//Sortarea elem unui vector
	int n, i,j;
	scanf("%d",&n);
	int* v = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d",&v[i]);
	}
		for (i = 0; i < n - 1; i++)
			for (j = i + 1; j < n; j++)
				if (v[i] > v[j])
					swap(&v[i],&v[j]);

		for(i=0;i<n;i++) 
			printf("%d ", v[i]);
}