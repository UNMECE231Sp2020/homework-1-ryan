#include <stdio.h>
#include "my_complex.h"

int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};
	
	Complex (*ptr[4])(Complex, Complex) = {complex_add, complex_sub, complex_mult, complex_div};
	double (*ptr1[2])(Complex) = {magnitude, phase};
	
	int i;
	
	for (i=0; i<4; i++)
	{
		handler1(ptr[i], a, b);
	}
	
	for (i=0; i<2; i++)
	{
		handler2(ptr1[i], a);
		handler2(ptr1[i], b);	
	}
	
	return 0;
}
