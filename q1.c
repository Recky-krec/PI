#include <stdio.h>
#include <math.h>


int main()
{
	float num = 0;
	float best = 0;

	printf("> ");
	scanf ("%f", &num);
	best = num;
	
	while (num != 0.0)
	{
		printf("> ");
		scanf ("%f", &num);
		best = fmax (best, num);
	}

	printf("%f\n", best);

	return 0;
}