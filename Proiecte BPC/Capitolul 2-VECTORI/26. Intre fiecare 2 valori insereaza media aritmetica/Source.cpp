#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//Program care intre fiecare 2 numere insereaza media lor aritmetica
	int  i, j, aux, k, n;
	float  x[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("x[%d]= ", i);
		scanf("%f", &x[i]);
	}

	float ma = 0; int poz = 0;

	for (i = 0; i < n-1; i = i + 1 + poz) {
		for (k = n; k > i; k--) 
			x[k] = x[k - 1];
			x[i+1] = v[i];
			n++; poz = 1;
		 
	}

	
	for (i = 0; i < n; i++)
		printf("%.2f ", x[i]);
}
