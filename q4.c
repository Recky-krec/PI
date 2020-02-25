#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define BYTE 8

void reverseArray (int* l, int n) // n nao usado. DESAFIO: fazer isto com malloc sem deixar que a funçao tenha resultados diferentes com os mesmos parametros
{
	int temp[BYTE] = {0};

	for (int k = n-1, i = 0; k>=0; k--, i++)
		temp[i] = l[k];

	for (int i = 0; i<n; i++)
		l[i] = temp[i];
		
}

// support to 8 bit conversions only (ranges from 0 to 256)
int* decToBin (int num)
{
	int* r;
	r = (int*)malloc(sizeof(int)*BYTE);
	int index = 0;

	while (num > 0) 
	{
		r[index] = (num % 2);

		num = num / 2;
		index++;
	}

	reverseArray(r, BYTE);
	return r;
}

int quantosTem (int x, int* l, int size)
{
	int r = 0;
	for (int i = 0; i<size; i++)
	{
		if (l[i] == x){

			r+=1;
		} 

	}
	
	return r;
}

int bitsUm (int n) 
{
	return quantosTem(1, decToBin(n), BYTE);
}

int main()
{
	int *l = decToBin(46);
	
	for (int i = 0; i<BYTE; i++)
		printf("%d", *(l + i));
	

	printf("\t%d\n", bitsUm(46));

	return 0;
}