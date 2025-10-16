#include <stdio.h>


void PrintDivisors(int digit) {
    printf("Divisors of %d are: ", digit);
    
    for (int i = 1; i <= digit; i++) {
        if (digit % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    PrintDivisors(100);
    return 0;
}
