#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main()
{//determinarea elem maxim si pozitia tuturor aparitiilor
	int i, n;
	scanf("%d", &n);
	int* v = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}
	int max = v[0];
	for (i = 1; i < n; i++)
		if (v[i] > max)
			max = v[i];
	int k = 0;
	//o sa vad de cate ori apare maximul in vector ca sa aloc optim vectorul poz
	for (i = 0; i < n; i++)
		if (v[i] == max)
			k++;

	printf("Maximul este: %d\n\n", max);

	int* poz = (int*)malloc(k * sizeof(int));
	int p = 0;
	for (i = 0; i < n; i++)
		if (v[i] == max)
			poz[p++] = i;

	printf("Maximul apare pe pozitiile: ");
	for (i = 0; i < p; i++)
		printf("%d ", poz[i]);
	free(poz); free(v);
}