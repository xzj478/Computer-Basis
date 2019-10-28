#include<stdio.h>
#include<math.h>

int main(){
    int c, i, ll;
    double cfac=1, ifac=1, llfac=1;
    for(c=1; cfac < pow(2, 8*sizeof(char));){
        c++;
        cfac *= c;
    }
    printf("The largest factorial for char is %d!\n", c-1);
    for(i=1; ifac < pow(2, 8*sizeof(int));){
        i++;
        ifac *= i;
    }
    printf("The largest factorial for int is %d!\n", i-1);
    for(ll=1; llfac < pow(2, 8*sizeof(long long));){
        ll++;
        llfac *= ll;
    }
    printf("The largest factorial for long long is %d!\n", ll-1);
    return 0;
}
