#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//Elem maxim dintr-un vector si pozitia tuturor aparitiilor
	int v[100], i, n;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	int max = v[0];
	for (i = 1; i < n; i++)
		if (v[i] > max)
			max = v[i];

	printf("Maximul este %d\n", max);
	
	printf("Pozitiile pe care apare maximul sunt: ");
	for (i = 0; i < n; i++) {
		if (v[i] == max) {
			printf(" %d ", i);
			
		}
	}
}