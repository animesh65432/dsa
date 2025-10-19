#include <stdio.h>

void SelectionSortAlgorithm(int nums[], int n){

    for (int i = 0 ; i < n ; i ++){

        for (int  j = i + 1 ; j < n ; j ++){

            if (nums[i] > nums[j]){

                int temp  = nums[i] ;

                nums[i] = nums[j] ; 

                nums[j] = temp ;
            }
        }
    }
}

int main (){
    int array[] = {13,46,24,52,20,9} ;
    int  N = 6 ;
    SelectionSortAlgorithm(array,N);

    printf("Array elements: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return  0;
}