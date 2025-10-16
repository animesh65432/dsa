#include <stdio.h>

int GCD_of_Two_Numbers(int x , int y){

    int max_gcd = 1;

    for ( int i = 1 ; i < x ; i ++) {
        if (x % i == 0 & y % i == 0) {
            max_gcd = i ;
        }
    }

    return  max_gcd ;

};

int main() {
    int res = GCD_of_Two_Numbers(4,6);
    printf("%d",res);
    return 0;
}