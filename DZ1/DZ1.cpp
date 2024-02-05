#include <iostream>
#include <ctime>
#include <random>

int main()
{
	srand(time(0));
	int end = 1000;
	int start = 0;
	int N1;
	int M1;
	int N2;
	int M2;

	printf("enter arrea size Matrix 1 ");
	scanf_s("%d%d", &N1, &M1);
	printf("enter arrea size Matrix 2 ");
	scanf_s("%d%d", &N2, &M2);
	if (M1 != N2) 
	{
		printf("Cannot multiply matrix with these dimensions");
		return 1;
	}

	int** a = new int* [N1];
	for (int i = 0; i < N1; i++)
		a[i] = new int[M1];

	int** b = new int* [N2];
	for (int i = 0; i < N2; i++)
		b[i] = new int[M2];

	for (int i = 0; i < N1; i++)
	{
		for (int j = 0; j < M1; j++)
		{
			a[i][j] = rand() % (end - start + 1) + start;
		}
	}

	for (int i = 0; i < N2; i++)
	{
		for (int j = 0; j < M2; j++)
		{
			b[i][j] = rand() % (end - start + 1) + start;
		}
	}
	
	int** c = new int* [N1];
	for (int i = 0; i < N1; i++)
	{
		c[i] = new int[M2];
		for (int j = 0; j < M2; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < M1; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	for (int i = 0; i < N1; i++)
	{
		for (int j = 0; j < M1; j++)
		{
			printf("%d ", a[i][j]);

		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < N2; i++)
	{
		for (int j = 0; j < M2; j++)
		{
			printf("%d ", b[i][j]);

		}
		printf("\n");
	}
	printf("\n");
	
	for (int i = 0; i < N1; i++)
	{
		for (int j = 0; j < M2; j++)
		{
			if (j > 0);
			printf(" ");
			printf("%d", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
