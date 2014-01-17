/**************************************************************************
 Project Euler #7: 10,001st prime     Name: Jason Liu
 **************************************************************************
 By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can 
 see that the 6th prime is 13.
 What is the 10 001st prime number? */

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
	int prime, numprimes, count, num, i;

	prime = 0;
	numprimes = 0;
	num = 2;

	while (numprimes<10001) {

	 	for (i = 1; i <= pow(num, 0.5); i++) { /* Remember to check 25, 36.. */
	 		if (num % i == 0) 
	 			count++;
	 		if (count > 1) 
	 			break;
	 	}

	 	if (count == 1) {  /* counter is 1 if prime otherwise not */
	 		numprimes++;
	 		//printf("%d\n", num);
	 	}
	 	
	 	num++;
	 	count = 0;
	 
	}

	printf("%d\n", num-1);	

	return 0;
}