#include<stdio.h>
#include<stdlib.h>

void asc(int a,int b,int c){
	if(a < b){
		if(b < c){
			printf("%d %d %d\n", a, b, c);}
		else{
			if(a < c){
				printf("%d %d %d\n", a, c, b);}
			else{
				printf("%d %d %d\n", c, a, b);}
		}
	}
	else{
		if(b > c){
			printf("%d %d %d\n", c, b, a);}
		else{
			if(a < c){
				printf("%d %d %d\n", b, a, c);}
			else{
				printf("%d %d %d\n", b, c, a);}
		}
	}
}

void dsc(int a,int b,int c){
	if(a < b){
		if(b < c){
			printf("%d %d %d\n", c, b, a);}
		else{
			if(a < c){
				printf("%d %d %d\n", b, c, a);}
			else{
				printf("%d %d %d\n", b, a, c);}
		}
	}
	else{
		if(b > c){
			printf("%d %d %d\n", a, b, c);}
		else{
			if(a < c){
				printf("%d %d %d\n", c, a, b);}
			else{
				printf("%d %d %d\n", a, c, b);}
		}
	}
}

void abasc(int a, int b, int c){
	a = abs(a);
	b = abs(b);
	c = abs(c);
	if(a < b){
		if(b < c){
			printf("%d %d %d\n", a, b, c);}
		else{
			if(a < c){
				printf("%d %d %d\n", a, c, b);}
			else{
				printf("%d %d %d\n", c, a, b);}
		}
	}
	else{
		if(b > c){
			printf("%d %d %d\n", c, b, a);}
		else{
			if(a < c){
				printf("%d %d %d\n", b, a, c);}
			else{
				printf("%d %d %d\n", b, c, a);}
		}
	}
}

void abdsc(int a, int b, int c){
	a = abs(a);
	b = abs(b);
	c = abs(c);
	if(a < b){
		if(b < c){
			printf("%d %d %d\n", c, b, a);}
		else{
			if(a < c){
				printf("%d %d %d\n", b, c, a);}
			else{
				printf("%d %d %d\n", b, a, c);}
		}
	}
	else{
		if(b > c){
			printf("%d %d %d\n", a, b, c);}
		else{
			if(a < c){
				printf("%d %d %d\n", c, a, b);}
			else{
				printf("%d %d %d\n", a, c, b);}
		}
	}
}

int main(){
	int x, y, z, d;
	printf("Please input 3 integer numbers:\n");
	scanf("%d %d %d", &x, &y, &z);
	printf("Please choose the sorting method:\n");
	printf("Ascending(input 1), Dscending(input 2)\n");
	printf("Absolute Ascending(input 3), Absolute Dscending(input 4)\n");
	scanf("%d", &d);
	switch(d){
		case 1:
			asc(x, y, z);
			break;
		case 2:
			dsc(x, y, z);
			break;
		case 3:
			abasc(x, y, z);
			break;
		case 4:
			abdsc(x, y, z);
			break;
		default:
			printf("error\n");
		}
	return 0;
}
