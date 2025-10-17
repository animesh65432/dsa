#include <stdio.h>
#include <stdbool.h>

bool Checkifastringispalindromeornot (char string[],int start,int end){
    if (start >= end){
        return 0;
    }

    if (string[start] != string[end]){
        return 0;
    }
    else 
    {
        Checkifastringispalindromeornot(string, start-1, end-1);
    }
    Checkifastringispalindromeornot(string, start-1, end-1);

    return 1;
}

int main () {
    int res =  Checkifastringispalindromeornot("madam",0,4);
    int res1 =  Checkifastringispalindromeornot("Animesh",0,6);
    printf("%d\n",res);
    printf("%d",res1);
    return 0;
}