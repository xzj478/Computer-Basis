#include <stdio.h>


int fun() {
	int x;
	int delta = 7;
	x = x + delta;
 	return x;
}

int main() {
	int x = 32 + 15;
	printf ("X, %c \n", x);

	fun(x);
	printf ("after using function once, %c \n", x);

	fun(x);
	printf ("after using function twice, %c \n", x);
}
