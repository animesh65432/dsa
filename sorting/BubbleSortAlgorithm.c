#include <stdio.h>

void BubbleSortAlgorithm(int arr[], int n){
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main (){
    int array[] = {13,46,24,52,20,9} ;
    int  N = 6 ;

    BubbleSortAlgorithm(array,N);

    printf("Array elements: ");

    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return  0;
}