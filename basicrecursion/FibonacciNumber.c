#include <stdio.h>
#include <stdbool.h>

int FibonacciNumber (int n){
    if (n==0 || n == 1){
        return n;
    }
    return FibonacciNumber(n-1) + FibonacciNumber(n-2);
}

int main () {

    int res = FibonacciNumber(5);

    printf("%d\n",res);

    return 0;
}