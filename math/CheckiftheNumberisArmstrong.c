#include <stdio.h>
#include <stdbool.h>

int Check_if_the_Number_is_Armstrong(int number){
    int temp = number;
    int Armstrong = 0;

    while (number > 0) {
        int digit = number % 10 ;
        Armstrong = Armstrong + digit * digit * digit ;
        number = number / 10;
    }

    return  Armstrong == temp;
}

int main() {
    int res = Check_if_the_Number_is_Armstrong(153);
    printf("%d",res);
    return 0;
}