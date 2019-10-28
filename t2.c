#include<stdio.h>
#include<math.h>

int main(){
	int n;
	double ec = 0;
	for(n = 1; exp(1) - ec < 0.001; n++){
		ec = pow((1 +(double)(1/n)),n);}
	printf("%d\n", n);

	return 0;
}

