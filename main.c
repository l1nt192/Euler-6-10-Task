#include <stdio.h>
#include "func.h"
#include <math.h>
#include "Euler.h"
#include <time.h>

int main()
{
	//int n = 10001; // Ќомер простого числа, которое нужно найти
	//unsigned long long int result = Task_7(n);
	//printf("%llu\n",result);
	//return 0;
	//int n = 100;
	//printf(" %d\n",Task_6(n));
	//char digits[] = { "73167176531330624919225119674426574742355349194934..." };
	//long long int result = Task_8(digits, 2);
	//printf("%lld", result);
	//printf("%lld", Task_10(2000000));
	//int sum = 1000;
	//printf("%d", Task_9(sum));
	clock_t begin = clock();
	printf("%lld\n", Task_10(2000000));
	clock_t end = clock();
	double runtime = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("runtime: %f\n", runtime);

	return 0;
}