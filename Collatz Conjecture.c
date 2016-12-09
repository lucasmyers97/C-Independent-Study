/* Author: Lucas Myers */
/* Date: 12/5/16 */

#include <stdio.h>
#include <stdlib.h>

#define collatz(n) do { n = (n % 2 == 0) ? (n / 2) : (3 * n + 1); } while (n != 1)

int main(int argc, char *argv[])
{
	if (argc != 2) {
		printf("Input number with which to verify Collatz Conjecture.\n");
		exit(1);
		}
		
	long num = atol(argv[1]);
	int n = 0;
	
	if (num > 10000) {
		printf("That number is too big.\n");
		exit(1);
	}
	
	for (int i = 1; i <= num; i++) {
		n = i;
		collatz(n);
	} 
	
	printf("It worked!\n");
	
	return 0;
}
