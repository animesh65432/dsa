#include <stdio.h>

void print_name_n_times(int n){

    if (n == 0){
        return; 
    }

    printf("%d\n",n);
    print_name_n_times(n-1);
}

int main () {
    print_name_n_times(5);
    return 0;
}