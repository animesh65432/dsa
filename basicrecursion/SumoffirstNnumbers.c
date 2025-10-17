#include <stdio.h>

int SumoffirstNnumbers (int n){

    if (n ==0){
        return 0;
    }

    return n + SumoffirstNnumbers(n-1);
}

int main () {
    int res =SumoffirstNnumbers(5);
    printf("%d",res);
    return 0;
}