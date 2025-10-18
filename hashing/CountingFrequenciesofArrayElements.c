#include <stdio.h>

void Counting_Frequencies_of_Array_Elements(int nums[], int n) {
    int freq[n];

    printf("Step 1️⃣  Initialize frequency array:\n");
    for (int i = 0; i < n; i++) {
        freq[i] = 0;
        printf("freq[%d] = %d\n", i, freq[i]);
    }
    printf("\n");

    printf("Step 2️⃣  Counting frequencies...\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] == -1) {
            printf("nums[%d] = %d is already counted, skipping.\n", i, nums[i]);
            continue;
        }

        int count = 1;
        printf("\n→ Checking element nums[%d] = %d\n", i, nums[i]);

        for (int j = i + 1; j < n; j++) {
            printf("   Comparing with nums[%d] = %d ... ", j, nums[j]);
            if (nums[i] == nums[j]) {
                count++;
                freq[j] = -1;
                printf("MATCH ✅ (count=%d, mark freq[%d]=-1)\n", count, j);
            } else {
                printf("NO match ❌\n");
            }
        }

        freq[i] = count;
        printf("Final count for nums[%d] = %d → freq[%d] = %d\n", i, nums[i], i, freq[i]);
    }
    printf("\n");

    printf("Step 3️⃣  Counting unique elements...\n");
    int uniqueCount = 0;
    for (int i = 0; i < n; i++) {
        if (freq[i] != -1) uniqueCount++;
    }
    printf("Unique elements found: %d\n\n", uniqueCount);

    printf("Step 4️⃣  Creating result array [uniqueCount][2]\n");
    int result[uniqueCount][2];
    int idx = 0;

    for (int i = 0; i < n; i++) {
        if (freq[i] != -1) {
            result[idx][0] = nums[i];
            result[idx][1] = freq[i];
            printf("result[%d] = [%d, %d]\n", idx, nums[i], freq[i]);
            idx++;
        }
    }

    printf("\n✅ Step 5️⃣  Final Output:\n");
    printf("[");
    for (int i = 0; i < uniqueCount; i++) {
        printf("[%d, %d]", result[i][0], result[i][1]);
        if (i != uniqueCount - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    int nums[] = {1, 2, 2, 1, 3};
    int n = 5;

    printf("Input array: [");
    for (int i = 0; i < n; i++) {
        printf("%d", nums[i]);
        if (i != n - 1) printf(", ");
    }
    printf("]\n\n");

    Counting_Frequencies_of_Array_Elements(nums, n);
    return 0;
}
