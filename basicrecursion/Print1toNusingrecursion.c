#include <stdio.h>

void Print_1_to_N_using_recursion (int n){

    if (n ==0){
        return;
    }


    Print_1_to_N_using_recursion(n-1);

    printf("%d\n",n);
}

int main () {
    Print_1_to_N_using_recursion(5);
    return 0;
}