#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//Elementele unui vector sunt in progresie geometrica

	int v[100], n, i, aux;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}
	int ratie = v[1] / v[0];

	i = 2;
	while (i < n && v[i] == v[i - 1] * ratie)
		i++;
	if (i == n)
		printf("Termenii sunt in progresie geometrica");
	else printf("Nu");
}