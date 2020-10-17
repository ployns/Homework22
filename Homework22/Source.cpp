#include<stdio.h>
int main()
{
	int X[2][2], Y[2][2], sum, i, j;


	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter Matrix X : ", i, j);
			scanf_s("%d", &X[i][j]);
		}
	}
	printf(" \n");

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter Matrix Y : ", i, j);
			scanf_s("%d", &Y[i][j]);
		}
	}
	printf(" \n");

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			sum = X[i][j] - Y[i][j];
			printf("Matrix X-Y is : %d-%d=%d\n", X[i][j], Y[i][j], sum);
		}
	}

	return 0;
}