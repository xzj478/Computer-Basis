#include <stdio.h>
#include <limits.h>

int main(){
	int a = 50000;
	long int b = 1000000;
	long long int c = a * b;

	printf ("int size is : %ld byte \n", sizeof(int));
	printf ("values of a and b are:\n");
	printf ("a = %d, b = %ld \n", a, b);
	printf ("c = a * b = %d * %ld = %lld \n", a, b, c);
}
