#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int pdrom(int n)
{
	int invers = 0;
	int m = n;
	while (n) {
		invers = invers * 10 + n % 10;
		n = n / 10;
	}
	if (invers == m)
		return 1;
  else return 0;
}
int len(int n)
{
	int lungime=0;

	while (n)
	{
		lungime++;
		n = n / 10;
	}
	return lungime;
}

int main()
{
	//Determinarea numerelor palindroame de lungime maxima
	int n, i;
	scanf("%d", &n);
	int *v = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	int lmax=0;
	int* y = (int*)malloc(n * sizeof(int)); 
	int k = 0;

	for (i = 0; i < n; i++) {
		int lungime = 0;
		if (pdrom(v[i]))
		{
			lungime = len(v[i]);
			if (lungime > lmax)
			{
				lmax = lungime;
				y[0] = v[i];
				k++;
			}
		else if (lungime==lmax)
			y[k++] = v[i];
		}
	}

	for (i = 0; i < k; i++)
		printf("%d ", y[i]);
	
}