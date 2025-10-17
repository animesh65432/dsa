#include <stdio.h>

void reverse(int start, int end, int arr[]) {
    if (start >= end) {
        return;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverse(start + 1, end - 1, arr);
}

void Reverseanarray(int array[], int n) {
    reverse(0, n - 1, array);
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    Reverseanarray(array, 5);

    int size = sizeof(array) / sizeof(array[0]);

    printf("Elements of the array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
