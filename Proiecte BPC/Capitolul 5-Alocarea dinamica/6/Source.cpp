#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>


float trio(float v[], int n)
{
	float min = v[0], max = v[0], ampl;
	int i;
	for (i = 1; i < n; i++) {
		if (v[i] > max)
			max = v[i];
		if (v[i] < min)
			min = v[i];
	}
	ampl = max - min;
	return ampl;
}
float medie(float v[], int n)
{
	int i; 
	float med = 0;
	for (i = 0; i < n; i++)
		med = med + v[i];
	med = med / n;
	return med;
}
void pestemedie(float v[], int n,float med, float y[], int* k)
{
	*k = 0;
	int i;
	for (i = 0; i < n; i++)
		if (v[i] > med)
			y[(*k)++] = i;
}

int main()
{
	//Amplitudinea vanzarilor, media lor si anii in  care au fost valori peste medie
	int n, i, j;
	scanf("%d",&n);
	float* v = (float*)malloc(n * sizeof(float));
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%f",&v[i]);
	}

	float ampl = trio(v, n);
	printf("Amplitudinea este: %.2f\n", ampl);
	float med = medie(v, n);
	printf("Media este: %2.f\n\n", med);

	float* y = (float*)malloc(n * sizeof(float));
	int k; 
	pestemedie(v, n, med, y, &k);
	for(i=0;i<k;i++)
		printf("%.0f ",y[i]);
}