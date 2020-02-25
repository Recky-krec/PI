#include <stdio.h>
#include <math.h>

int main()
{
	float n1;
	float best;
	float snd;
	scanf ("%f", &n1);

	best = n1;
	snd = n1;

	while (1)
	{
		scanf ("%f", &n1);
		if (n1 == 0)
			break;
		
		if (n1 > best) 
		{
			snd = best;
			best = n1;
		}

		if (n1 < best && n1 > snd)
		{
			snd = n1;
		}

	}

	printf("> %f\n", snd);
	return 0;
}