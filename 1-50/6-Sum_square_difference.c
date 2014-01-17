/**************************************************************************
 Project Euler #6: Sum square difference     Name: Jason Liu
 **************************************************************************
 2520 is the smallest number that can be divided by each of the numbers 
 from 1 to 10 without any remainder.
 What is the smallest positive number that is evenly divisible by all of 
 the numbers from 1 to 20? */

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
	int sumsquare, squaresum, i, num;

	sumsquare = 0, squaresum = 0;

	for (i = 0; i < 101; i++) {

		sumsquare = pow(i, 2.0) + sumsquare;

	}

	// sum from 1 to 100 is (100)(101)/2 = 5050
	squaresum = pow(5050.0, 2.0);

	printf("%d a %d\n", squaresum, sumsquare);

	num = squaresum - sumsquare;

	printf("%d\n", num);	

	return 0;
}