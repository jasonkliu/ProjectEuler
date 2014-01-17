/**************************************************************************
 Project Euler #5: Smallest multiple     Name: Jason Liu
 **************************************************************************
 2520 is the smallest number that can be divided by each of the numbers 
 from 1 to 10 without any remainder.
 What is the smallest positive number that is evenly divisible by all of 
 the numbers from 1 to 20? */

#include <stdio.h>
#include <math.h>

 // Find lcm and multiply across all.

int main(int argc, char* argv[]) {
	int num, i, a, b, t;

	num = 1;

	for (i = 1; i < 20; i++) {

		a = num;
		b = i;

		while (b != 0) {  // euclid find gcd
			t = b;
			b = a % b;
			a = t;
		}

		num = (num * i)/a; // find lcm

	}

	printf("%d\n", num);	

	return 0;
}