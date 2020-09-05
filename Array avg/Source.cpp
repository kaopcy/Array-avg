#include<stdio.h>
int main()
{
	int n, i = 0;
	float sum = 0, avg;
	float num[100];
	printf("Enter range : ");
SCAN:scanf_s("%d", &n);
	if (n > 100 || n < 0)
	{
		printf("Error\n");
		printf("Enter the number again: ");
		goto SCAN;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d.Enter number : ", i + 1);
		scanf_s("%f", &num[i]);
		sum = sum + num[i];
	}
	printf("sum is : %.2f\n", sum);
	printf("Avarage = %.2f", sum / n);
}