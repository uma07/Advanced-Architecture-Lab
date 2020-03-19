//This is the C-program for matrix multiplication without blocking.


# include <stdio.h>
# include <stdlib.h>


int main()
{


	int i, j, k, n, r;

	printf("Enter the size of the matrix i.e., 'n' : \n");
	scanf("%d", &n);

	int A[n][n], B[n][n], C[n][n];

	printf("Enter Matrix-'A' : \n");

	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &A[i][j]);

	printf("Enter Matrix-'B' : \n");

	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &B[i][j]);

	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
		{
			r = 0;

			for(k = 0; k < n; k++)
				r = r + A[i][k]*B[k][j];

			C[i][j] = r;
		}

	printf("Resultant Matrix-'C' : \n");

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			printf("%d ", C[i][j]);

		printf("\n");
	}

	return 0;


}
