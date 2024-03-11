#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>


int max( int v[], int n)
{
	int i, max = 0;
	for (i = 0; i < n; i++)
		if (v[i] > max)
			max = v[i];
	return max;
}
int main()
{
	//Studentii care au promovat cu cea mai mare nota
	int i, n;
	scanf("%d",&n);
	int *v = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d",&v[i]);
	}

	int maxim = max(v, n);

	int p = 0;
	int* y = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
		if (v[i] == maxim)
			y[p++] = i;
	
	for (i = 0; i < p; i++)
		printf("%d ", y[i]);


}