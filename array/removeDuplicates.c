#include "../printarray.h"
#include <stdio.h>

int removeDuplicates(int nums[], int n) {
    if (n == 0) return 0;

    int j = 0;

    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[j]) {
            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;
}

int main() {
    int nums[] = {0, 0, 3, 3, 5, 6};
    int n = 6;

    int newLength = removeDuplicates(nums, n);

    printArray(nums,n);

    printf("\nTotal unique elements: %d\n", newLength);
    return 0;
}
