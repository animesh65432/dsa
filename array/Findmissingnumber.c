#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

// brute force
// int Findmissingnumber(int nums[], int n) {
//     for (int i = 0; i <= n; i++) {  // include 0
//         int found = 0;

//         for (int j = 0; j < n; j++) {
//             if (nums[j] == i) {
//                 found = 1;
//                 break;
//             }
//         }

//         if (!found) {
//             return i;
//         }
//     }

//     return -1;
// }
#include <stdio.h>

int FindMissingNumber(int nums[], int n) {
    int total = n * (n + 1) / 2; // sum of 0..n
    int sum_array = 0;

    for (int i = 0; i < n; i++) {
        sum_array += nums[i];
    }

    return total - sum_array;
}

int main() {
    int nums[] = {0, 2, 3, 1, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    int missing = FindMissingNumber(nums, size);
    printf("%d\n", missing);

    return 0;
}
