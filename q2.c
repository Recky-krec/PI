#include <stdio.h>
#include <math.h>

int main()
{
	float num = 1;
	float sum = 0;
	float n = 0;
	
	while (1)
	{
		printf("> ");
		scanf ("%f", &num);
		
		if (num == 0)
			break;

		sum += num;
		n++;
	}

	printf("%f\n", (sum/n));

	return 0;
}