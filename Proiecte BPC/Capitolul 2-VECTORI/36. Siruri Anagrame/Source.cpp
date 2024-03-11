#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{
	//Doua siruri sunt anagrama celuilalt
	int x[100], i, j, n;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("x[%d]= ", i);
		scanf("%d", &x[i]);
	}
	int y[100];
	for (i = 0; i < n; i++) {
		printf("y[%d]= ", i);
		scanf("%d", &y[i]);
	}
	int aux;
	for(i=0;i<n-1;i++)
		for (j = i + 1; j < n; j++){
			if (x[i] > x[j]) {
				aux = x[i];
				x[i] = x[j];
				x[j] = aux;
			}
			if (y[i] > y[j]) {
				aux = y[i];
				y[i] = y[j];
				y[j] = aux;
			}
				
		}
	int ok = 1;
	for (i = 0; i < n; i++)
		if (x[i] != y[i])
			ok = 0;
	if (ok)
		printf("Sirurile sunt anagrame sau ceva de genul");
	else printf("Nu");
}
