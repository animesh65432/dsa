#include <stdio.h>

// Merge two halves of an array
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2]; // temporary arrays

    // Copy data to temp arrays
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

    // Merge temp arrays back into arr
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    // Copy remaining elements
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

// Recursive merge sort
void mergeSort(int arr[], int left, int right) {
    if (left >= right) return; // base case: one element

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);      // sort left half
    mergeSort(arr, mid + 1, right); // sort right half
    merge(arr, left, mid, right);   // merge both halves
}

int main() {
    int arr[] = {5, 2, 8, 4, 1};
    int N = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, N - 1);

    printf("Sorted array: ");
    for (int i = 0; i < N; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
