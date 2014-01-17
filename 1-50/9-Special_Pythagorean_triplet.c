/**************************************************************************
 Project Euler #9: Special Pythagorean triplet     Name: Jason Liu
 **************************************************************************
 A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 a^2 + b^2 = c^2.  For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
 There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 Find the product abc. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
	int a, b, c;

	a = b = c = 0;

	for (a = 1; a < 1000/3; a++) {
		for (b = 1; b < 500; b++) {
			c = 1000 - a - b;

			if ((pow(a, 2.0) + pow(b, 2.0)) == pow(c, 2.0)) {
				
				printf("%d\n", a*b*c);
				exit(0);

			}

		}


	}	

	return 0;
}