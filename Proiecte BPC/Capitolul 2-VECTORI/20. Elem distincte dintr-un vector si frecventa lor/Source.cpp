#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int frecv[100];
int main()
{
	//Program care determina elementele distincte dintr-un vector si frecv lor de aparitie
	int v[100], n, i, aux;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}
	int max = 0;

	for (i = 0; i < n; i++)
		if (v[i] > max)
			max = v[i];

	for (i = 0; i < n; i++)
		frecv[v[i]] = frecv[v[i]] + 1;

	for (i = 0; i < max; i++)
		if (frecv[i])
			printf("Frecventa lui %d este:  %d\n", i, frecv[i]);
}