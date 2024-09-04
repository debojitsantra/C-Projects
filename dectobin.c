#include <stdio.h>
#include <string.h>
int main()
{
	int a, b, k, i = 0;
	int bin[65];
	printf("Enter Dec Num(only int): ");
	scanf("%d", &a);
	b = a;
	do
	{
		bin[i++] = a % 2;
		a = a / 2;
	} while (a > 0);

	k = sizeof(bin);
	printf("Bin form of %d is: ", b);
	int j = i - 1;
	while ((j < k) && (j >= 0))
	{
		printf("%d", bin[j]);
		j--;
	}
}
