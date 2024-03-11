#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//Elementele unui vector formeaza o progresie aritmetica

	int v[100], n, i, aux;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	int ratie = v[1] - v[0];

	i = 1;
	while (i < n && v[i + 1] - v[i] == ratie)
		i++;
	if (i == n - 1)
		printf("Termenii sunt in progresie aritmetica");
	else printf("Termenii nu sunt in progresie aritmetica");
}