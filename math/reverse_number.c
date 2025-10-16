#include  <stdio.h>

int reverse_number(int number){
    int res = 0;

    while (number > 0) {
        int digit = number % 10;
        res = res * 10 + digit;
        printf("%d", res);
        number = number / 10;
    }
    return  res;
}

int main() {
    int res = reverse_number(120);
    printf("%d", res);
    return 0;
}
