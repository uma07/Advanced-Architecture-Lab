//This is the C-program for matrix multiplication using blocking method.


# include <stdio.h>
# include <stdlib.h>



int minimum(int a, int b)
{
	return (a < b ? a : b);
}



int main()
{


	int i, j, k, jj, kk, n, r, b;

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
			C[i][j] = 0;

	printf("Enter the blocking factor : \n");
	scanf("%d", &b);

	for(jj = 0; jj < n; jj += b)
	for(kk = 0; kk < n; kk += b)
	for(i = 0; i < n; i++)
		for(j = jj; j < minimum(jj+b, n); j++)
		{
			r = 0;

			for(k = kk; k < minimum(kk+b, n); k++)
				r = r + A[i][k]*B[k][j];

			C[i][j] += r;
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
