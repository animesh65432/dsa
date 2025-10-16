#include <stdio.h>
#include <stdbool.h>


bool CheckforPrimeNumber(int number){
    int count  = 0;

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            count ++ ;
        }
    }
    // printf("%d",count);
    return  count  == 2 ;
}

int main() {
    int res = CheckforPrimeNumber(5);
    printf("%d",res);
    return 0;
}