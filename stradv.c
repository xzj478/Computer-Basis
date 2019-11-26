#include<stdio.h>
#include<string.h>

void hmw(char str[]){
	int i, j = 0;
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == ' '){
			j++;}
	}
	j++;
	printf("The sentence contain %d words.\n", j);
}

void lew(char str[]){
	int x, y, n=0, m=0;
	int *p[50]={0};
	for(x = 0; str[x] != '\0'; x++){
		if(str[x] == ' '){
            *(p+n) = x - m;
            m = x;
            m++;
            n++;
        }
    }
	*(p+n) = x - m;
	printf("\nThe length of each word is:\n");
	for(y = 0; y < n + 1; y++){
		printf("%d ", *(p+y));}
	printf("\n");
}

void ncl(char str[]){
    int a, b, d=0, k, t[50]={0}, i, j, m, n = 0, x = 0, y = 0, z, s;
    double avg;
    char c[50]={0}, e[50]={0};
    for(a = 0; str[a] != '\0'; a++){
        if(str[a] == ' ' || str[a] == '0'){
            continue;
        }
        for(b = a + 1; str[b] != '\0'; b++){
            if(str[a] == str[b]){
                str[b] = '0';
                t[d]++;
            }
        }
        c[d] = str[a];
        t[d]++;
        d++;
        str[a] = 0;
    }
    printf("\nThis is the frequency of each symbol appear:\n");
    for(k = 0; c[k] != '\0'; k++){
        printf("%c:%d\n", c[k], t[k]);
        n = n + c[k]*t[k];
        x = x + t[k];
    }
    avg = (double)n / x;
    printf("The average value of sentence is:%f\n", avg);
    strcpy(e, c);
    for(i = 0; e[i] != '\0'; i++){
        for(j = i + 1; e[j] != '\0'; j++){
            if(e[j] < e[i]){
                m = e[j];
                e[j] = e[i];
                e[i] = m;
            }
        }
    }
    printf("The min of char is:%c\n", e[0]);
    printf("The max of char is:%c\n", e[i-1]);
    z = t[y];
    for(y = 1; y < k; y++){
        if(z < t[y]){
            z = t[y];
        }
    }
    for(s = 0; s < k; s++){
        if(z == t[s]){
            printf("moda: %c:%d\n", c[s], t[s]);
        }
    }
}

void mv(char str[]){
    int i, j, m, n = 0, x, d, e, k;
    char c[50];
    double mid;
    for(i = 0; str[i] != '\0'; i++){
        for(j = i + 1; str[j] != '\0'; j++){
            if(str[j] < str[i]){
                m = str[j];
                str[j] = str[i];
                str[i] = m;
            }
        }
    }
    while(str[n] == ' '){
        n++;
    }
    for(x = n; str[x] != '\0'; x++){
        c[x-n] = str[x];
    }
    for(k = 0; c[k] != '\0'; k++){
        printf("%c ", c[k]);
    }
    if((x-n)%2 == 0){
        d = (x-n)/2;
        mid = (double)(c[d-1] + c[d])/2;
    }
    else{
        e = (x-n)/2;
        mid = c[e];
    }
    printf("\nmid value is %f\n", mid);
}

int main(){
    char str1[100], c[50];
    printf("Please input your sentence:\n");
    gets(str1);
    strcpy(c, str1);

    hmw(str1);
    lew(str1);
    ncl(str1);
    mv(c);

    return 0;
}
