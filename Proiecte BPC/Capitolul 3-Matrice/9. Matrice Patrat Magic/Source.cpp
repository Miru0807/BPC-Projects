#include <iostream>

int main()
{
	//Matricea patrat magic-suma elem de pe linie=suma de pe coloana=suma de pe diagonale
	int a[100][100], m, n, i, j, aux;
	cin >> m >> n;

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			cin >> a[i][j];

			int sdp = 0, sds = 0;

			for (i = 0; i < m; i++)
				for (j = 0; j < n; j++)
					if (i == j)
						sdp = sdp + a[i][j];

			for (i = 0; i < m; i++)
				for (j = 0; j < n; j++)
					if (i + j == m - 1)
						sds = sds + a[i][j];



			int sumaL[100];
			for (i = 0; i < m; i++)
			{
				sumaL[i] = 0;
				for (j = 0; j < n; j++)
					sumaL[i] = sumaL[i] + a[i][j];
			}

			int sumaC[100];
			for (j = 0; j < n; j++)
			{
				sumaC[j] = 0;
				for (i = 0; i < m; i++)
					sumaC[j] = sumaC[j] + a[i][j];
			}

			int ok = 1;
			if (sds != sdp)
				ok = 0;
			if (ok)
				for (i = 0; i < m; i++)
					if (sumaL[i] != sumaC[i])
						ok = 0;
			if (ok)
				for (i = 0; i < n; i++)
					if (sumaL[i] != sds)
						ok = 0;
			if (ok)
				cout << "true"
			else "false;
		}