/**************************************************************************
 Project Euler #9: Summation of primes     Name: Jason Liu
 **************************************************************************
 The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 Find the sum of all the primes below two million. */

#include <stdio.h>
#include <math.h>

 // Look at problem #7, find the 10001st prime!

int main(int argc, char* argv[]) {
	int count, num, i;
	long int sum;

	num = 2;
	sum = 0;

	while (num<2000000) {

	 	for (i = 1; i <= pow(num, 0.5); i++) { /* Remember to check 25, 36.. */
	 		if (num % i == 0) 
	 			count++;
	 		if (count > 1) 
	 			break;
	 	}

	 	if (count == 1) {  /* counter is 1 if prime otherwise not */
	 		sum = sum + num;
	 		//printf("%d\n", num);
	 	}
	 	
	 	num++;
	 	count = 0;
	 
	}

	printf("%ld\n", sum);	

	return 0;
}