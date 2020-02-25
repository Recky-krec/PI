#include <stdlib.h>
#include <stdio.h>

int qDig (unsigned int n)
{
	int d = n / 10;
	int q = 1;

	while (d >= 1)
	{
		q++;
		d = d / 10;
	}

	return q;
}

int main()
{
	printf("%d\n",qDig(23));
}
