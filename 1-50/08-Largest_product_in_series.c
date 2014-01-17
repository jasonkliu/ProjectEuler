/**************************************************************************
 Project Euler #8: Largest product in a series     Name: Jason Liu
 **************************************************************************
 Find the greatest product of five consecutive digits in the 1000-digit number.
 See 8-Largest_product_in_series.in for an input file. */

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
	int a, b, c, d, e, next, sum, max;

	a = b = c = d = e = sum = max = 0;

	while ((next = getchar()) != EOF) {

		next = next - 48; // Convert the ASCII value to corresponding integer

		e = d;
		d = c;
		c = b;
		b = a;
		a = next;

		sum = a * b * c * d * e;

		if (sum > max)
			max = sum;
	}

	printf("%d\n", max);	

	return 0;
}