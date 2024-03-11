#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
int main()
{

	//Valoarea unui polinom intr-un punct dat
	int v[100], n, i, s = 0;
	scanf("%d", &n);

	for (i = 0; i <=n; i++)
	{
		printf("X la puterea %d este: ",i);
		scanf("%d", &v[i]);
	}

	//Punctul va fi a;
	int a; 
	printf("Punctul este: ");
	scanf("%d", &a); 
	//Valoarea o vom afla folosind practic produsul scalar denumit val
	int val = 0;
	for (i = 0; i <= n; i++)
		val = val + v[i] * pow(a, i);

	printf("Valoarea este: ");
	printf("%d", val);

}