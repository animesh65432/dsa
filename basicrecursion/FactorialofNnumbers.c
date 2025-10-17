#include <stdio.h>

int FactorialofNnumbers (int n){
    if (n == 0){
        return 1;
    }


    return n * FactorialofNnumbers(n-1);
}

int main () {
    int res =  FactorialofNnumbers(5);
    printf("%d",res);
    return 0;
}