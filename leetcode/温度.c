#include<stdio.h>
#include<stdlib.h>

double* convertTemperature(double celsius, int* returnSize){
    double* arr = (double*) malloc(sizeof(double) * 2);
    arr[0] = celsius + 273.15;
    arr[1] = celsius * 1.80 + 32.00;
    *returnSize=2;
    return arr;
}

int main()
{
	int* returnSize;
	double celsius;
	scanf("%lf", &celsius);
	double* arr = convertTemperature(celsius, returnSize);
//	printf("%d\n", *returnSize);
	for(int i=0;i<*returnSize;i++)
	{
		printf("%f ", arr[i]);
	}
	return 0;
}
