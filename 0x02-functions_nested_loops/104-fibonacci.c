#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description: prints the sum of multiples of 3 or 5
 * Return: 0
 */
int main(void)
{
	unsigned long int fb1 = 0, bn1= 1, fb2 = 0, bn2 = 2;
	unsigned long int h1, h2, h3;
	int count;

	printf("%lu, %lu, ", bn1, bn2);
	for (count = 2; count < 98; count++)
	{
		if (bn1 + bn2 > LARGEST || fb2 > 0 || fb1 > 0)
		{
			h1 = (bn1 +bn2) / LARGEST;
			h2 = (bn1 + bn2) % LARGEST;
			h3 = fb1 + fb2 + h1;
			fb1 = fb2, fb2 = h3;
			bn1 = bn2, bn2 = h2;
			printf("%lu%010lu", fb2, bn2);
		}
		else
		{
			h2 = bn1 + bn2;
			bn1 = bn2, bn2 = h2;
			printf("%lu", bn2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
