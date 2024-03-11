#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//Dandu-se un vector neordonat, sa se det elementul cu numarul de ordine i din masivul
	//ordonat crescator fara sa sa ordoneze vectorul
	int v[100], i, j, n; int frecv[100];

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}
	for (i = 0; i < n; i++)
		frecv[i] = 0;

	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (v[i] > v[j])
				frecv[i]++;
			else frecv[j]++;

	printf("Ordinea elementelor este: \n");
	for (i = 0; i < n; i++)
		printf("Nr %d apare pe pozitia  %d\n", v[i], frecv[i]+1);

}