#include <stdio.h>

int fun(int x) {
        x = x + 7;
        return x;
}


int main() {
	int x = 32 + 15;
	printf ("X, %d \n", x);

	x = fun(x);
	printf ("after using function once, %d \n", x);

	x = fun(x);
	printf ("after using function twice, %d \n", x);

	printf("x address is: %p\n", &x);
	return 0;
}
