#include <stdio.h>

int fun() {
	char x = 32 + 15;
	char delta = 7;
	x = x + delta;
	return x;
}

int main() {
	char x = 32 + 15;
	printf("X, %c \n", x);

	fun();
	printf("after fun once, %c \n", x);

	fun();
	printf("after fun twice, %c \n", x);
}
