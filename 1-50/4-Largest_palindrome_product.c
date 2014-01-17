/**************************************************************************
 Project Euler #4: Largest palindrome product     Name: Jason Liu
 **************************************************************************
 A palindromic number reads the same both ways. The largest palindrome made
 from the product of two 2-digit numbers is 9009 = 91 × 99.

 Find the largest palindrome made from the product of two 3-digit numbers. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
	int num, n, digit, reverse, i, j, k, max;

	max = 0;

	for (i = 999; i > 0; i--) {

		for (j = 999; j > 0; j--) {

			num = i * j;
			//printf("%d\n", num);

			n = num;              /* find reverse by modulo and compare */
			reverse = 0;
			while (n > 0) {
				digit = n % 10;
				reverse = reverse * 10 + digit;
				n = n / 10;
			}

			//printf("%d a %d\n", num, reverse);

			if (num == reverse){   /* check for max number */
				if (num > max)
					max = num;
			}
		}
	}


	printf("%d\n", max);	

	return 0;
}