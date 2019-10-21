#include<stdio.h>
#include<math.h>

int * bin(char b){
	static int arr[8];
	int i, m;
	m = b;
	for(i=0; m/2>=1; i++){
		m = m/2;}
	b = b-pow(2,(double)i);
	arr[7-i] = 1;
	if(b>1){
		bin(b);}
	else if(b==1){
		arr[7] = 1;}
	return arr;
}

int main(){
	char a;
	printf("Please input the letter:\n");
	a = getchar();
	int *p,n;
	p = bin(a);
	printf("This is your binary number:\n");
	for(n=0; n<8; n++){
		printf("%d ", *(p+n));}
	printf("\n");
	return 0;
}

