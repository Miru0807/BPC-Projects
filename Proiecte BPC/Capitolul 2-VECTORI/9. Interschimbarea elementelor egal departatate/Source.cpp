#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()

{
	//Interschimbarea elementelor egal departate de capetele unui vector
	int v[100], aux, i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}


	for (i = 0; i < n / 2; i++)
	{
		int aux = v[i];
		v[i] = v[n - i - 1];
		v[n - i - 1] = aux;
	}


	for (i = 0; i < n; i++)
		printf("%d ", v[i]);
}