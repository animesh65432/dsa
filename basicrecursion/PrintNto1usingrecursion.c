#include <stdio.h>

void Print_N_to_1_using_recursion (int n){

    if (n ==0){
        return;
    }

    printf("%d\n",n);
    
    Print_N_to_1_using_recursion(n-1);
}

int main () {
    Print_N_to_1_using_recursion(5);
    return 0;
}