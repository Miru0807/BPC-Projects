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
	for (int i = 0; i < n; i++)
		printf("%d ", v[i]);
}

float medie(int v[], int n,float *med)
{
	 *med = 0; int k = 0;
	int i;
	for(i=0;i<n;i++)
		if (v[i])
		{
			*med = *med + v[i];
			k++;
		}
	*med = *med / k;
	return *med;
}

int main()
{
	//Sa se scrie subprogramul care calculeaza valoara medie e vanzarilor
	//eliminand zilele fara vanzari
	int v[100], n, i;
	citire(v,&n);
	afisare(v, n);
	float med;
	float mean = medie(v, n,&med);
	printf("\n%.2f", mean);

}