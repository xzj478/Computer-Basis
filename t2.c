#include<stdio.h>
#include<math.h>

int main(){
	int n;
	double ec = 0;
	double err = exp(1) - ec;
	for(n = 1; err < 0.001; n++){
		ec = pow((double)(1 + 1/n),(double)n);}
	printf("%d\n", n);

	return 0;
}

