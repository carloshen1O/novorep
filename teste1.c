#include <stdlib.h>
#include <stdio.h>

void op(float*, float*, float*, float*, float*);

int main()
{
	float num1 = 5;
	float num2 = 6;
	float result1,result2,result4;
	float result3;
	op(num1,num2,result1,result2,result3,result4);
	system ("PAUSE");
	return 0;
}

void op(float *num1, float *num2, float *result1, float *result2, float *result3, float *result4)
{
	*result1 = *num1 + *num2;
	*result2 = *num1 - *num2;
	*result3 = *num1 / *num2;
	*result4 = *num1 * *num2;
	
	printf ("A soma e: %d\n", *result1);
	printf ("A substracao e: %d\n", *result2);
	printf ("A divisao e: %d\n", *result3);
	printf ("A multiploicao e: %d\n", *result4);
}
