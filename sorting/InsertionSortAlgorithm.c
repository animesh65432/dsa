#include <stdio.h>

void InsertionSortAlgorithm(int arr[], int n ){
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}


int main (){
    int array[] = {13,46,24,52,20,9} ;
    int  N = 6 ;

    InsertionSortAlgorithm(array,N);

    printf("Array elements: ");

    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return  0;
}