#include <stdio.h>

int count_digit(int digit){

    int count = 0;

    while (digit > 0){
        count ++;
        digit = digit / 10;
    }

    return count;
};

int main() {
    int res = count_digit(14);
    printf("%d", res);
    return 0;
}
