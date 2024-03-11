#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//Cautare binara
	int v[100], i, n;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	int mid, left=0, right=n-1;
	int valoare;
	printf("Valoarea cautata este: ");
	scanf("%d", &valoare);

	while (left <= right) {
		mid = (left + right) / 2;
		if (v[mid] == valoare) {
			printf("Valoarea cautata se gaseste pe pozitia %d", mid); break;
		}
		else if (v[mid] > valoare)
			right = mid - 1;
		else left = mid + 1;
		
	}
}