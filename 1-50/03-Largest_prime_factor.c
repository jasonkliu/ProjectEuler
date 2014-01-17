/**************************************************************************
 Project Euler #3: Largest prime factor      Name: Jason Liu
 **************************************************************************
 The prime factors of 13195 are 5, 7, 13 and 29.
 What is the largest prime factor of the number 600851475143 ? */

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
	int factor;
	long long int num; // LONG_MAX is 2147483647

	factor = 2;
	num = 600851475143;

	while (num > factor) {

		if (num % factor == 0)   
			num = num/factor;  

		else 
			factor++;
	}
		
	printf("%d\n", factor);

	return 0;
}