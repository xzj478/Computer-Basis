#include<stdio.h>

void hmw(char str[]){
	int i, j = 0;
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == ' '){
			j++;}
	}
	j++;
	printf("The sentence contain %d words.\n", j);
}

void lew(char str0[]){
	int x, y, n=0, m=0;
	int *p;
	for(x = 0; str0[x] != '\0'; x++){
		if(str0[x] == ' '){
			*(p+n) = x - m;
			m = x;
			n++;}
	}
	*(p+n) = x - m;
	printf("The length of each word is:\n");
	for(y = 0; y < n+1; y++){
		printf("%d ", *(p+y));}
	printf("\n");
}

void ncl(char str2[]){
    int a, b, k, *t;
    char *c;
    for(a = 0; str2[a] != '\0'; a++){
        if(str2[a] == 0){
            continue;
        }
        *(t+a) = 0;
        for(b = a; str2[b] != '\0'; b++){
            if(str2[a] == str2[b+1]){
                str2[b+1] = 0;
                *(t+a) = *(t+a) + 1;
            }
        }
        *(c+a) = str2[a];
        *(t+a) = *(t+a) + 1;
        str2[a] = 0;
    }
    printf("This is the frequency of each symbol appear:\n");
    for(k = 0; *(c+k) != '\0'; k++){
        printf("%c: %d", *(c+k), *(t+k));
    }
}

int main(){
    char str1[100];
    printf("Please input your sentence:\n");
    gets(str1);

    hmw(str1);
    lew(str1);
    ncl(str1);

    return 0;
}

