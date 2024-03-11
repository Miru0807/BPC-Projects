#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//Inserarea unui elem intr-un vector ordonat, dupa inserare vectorul va ramane ordonat

	int v[100], n, i,j,aux; 
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	int k;
	for (i = n / 2; i > 0; i=i/2)
	{
		for (j = i; j < n; j++)
		{
			for(k=j-i;k>=0;k=k-i)
				if (v[k] > v[k + 1])
				{
					int aux = v[k];
					v[k] = v[k + 1];
					v[k + 1] = aux;
				}
		}
	}

	i = 0; j = 0;
	int valoare;
	printf("Valoarea ce trb sa fie introdusa este: ");
	scanf("%d", &valoare);

	 while (i < n && v[i] < valoare)
		i++;
	
	 for (j = n; j > i; j--)
		v[j] = v[j - 1];
	n++;
	v[i] = valoare; 
	for (i = 0; i < n; i++)
		printf("%d ", v[i]);
}