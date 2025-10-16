#include  <stdio.h>
#include <stdbool.h>


bool PalindromeNumber(int number){
    int dupicatenumber = number;
    int reverse_number = 0;

    while (number > 0){
        int digit = number % 10;
        reverse_number = reverse_number * 10 + digit ;
        number = number / 10;
    }

    return  reverse_number == dupicatenumber ;
}

int main() {
    bool res = PalindromeNumber(121);
    printf("%d", res);
    return 0;
}
