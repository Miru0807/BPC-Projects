#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
int main()
{
	//Transformarea unui vector in multime prin eliminarea dublurilor
	int v[100], i, j, aux, k, n;

	FILE* f;
	char numef[20];
	printf("Introduceti numele fisierului ce doriti sa fie citit: ");
	gets_s(numef);

	f = fopen(numef, "rt");
	if (f == NULL)
		printf("Fisierul nu poate fi accesat");
	else {

		fscanf(f,"%d", &n);
		
		for (i = 0; i < n; i++) 
			fscanf(f,"%d", &v[i]);
		fclose(f);

		for (i = 0; i < n - 1; i++)
			for (j = i + 1; j < n; j++)
				if (v[i] == v[j]) {

					for (k = j; k < n; k++)
						v[k] = v[k + 1];
					j--; n--;
				}

		f = fopen("RezultatCompactare.txt", "wt");


		for (i = 0; i < n; i++)
			fprintf(f,"%d ", v[i]);

	}
	printf("Gata, apasati o tasta ca sa iesiti ");
	_getch();

}