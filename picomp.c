/* File: picomp.c */

#include <stdio.h>            /* Header file for standard I/O library */
#include <math.h>                     /* Header file for math library */

int main()
{
	int i;  
	double sum, current, pi;
	i = 1;                               /* Denominator of current term */
	sum = 0.0;                                            /* So far sum */
	do {
		current = 1/(((double) i)*((double) i));          /* Current term */
		sum = sum+current;                     /* Add current term to sum */
		i++;                                             /* Next term now */
	} while (current > 1.0e-18);  /* Stop if current term is very small */
	pi = sqrt(6*sum);                    /* Compute approximation of pi */
	printf("Summed %d terms, pi is %.8f\n", i-1, pi);
	return 0;
}
