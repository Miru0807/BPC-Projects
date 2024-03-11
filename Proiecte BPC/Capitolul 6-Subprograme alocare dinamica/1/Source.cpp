#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>


int* citire(int *n)
{
	int i;
	scanf("%d",n);
	int *v = (int*)malloc((*n) * sizeof(int));
	for (i = 0; i < *n; i++)
	{
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}
	return v;
}
void afisare(int* v, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", v[i]);
	}
}
int main()
{//citirea unui vector cu subprogame, dinamic
	int n;
	int* v = citire(&n);
	afisare(v, n);
}