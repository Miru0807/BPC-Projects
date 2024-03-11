#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
int main()
{
	//Media geometrica a elem pozitive dintr-un vector
	int n, i;
	float v[100], mg = 1;
	//Ne trebuie un contor ca sa folosim formula
	float contor = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);

		scanf("%f", &v[i]);
	}

	for (i = 0; i < n; i++)

		if (v[i] > 0) {
			mg = mg * v[i]; contor++;
		}
	if (contor)
	{
		mg = pow(mg, 1 / contor);
	}
	printf("Media geometrica este %.2f", mg);
}