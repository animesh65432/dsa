#include <stdio.h>

int* Unionoftwosortedarrays(int nums1[], int n, int nums2[], int m) {
    static int res[100]; 
    int i = 0, j = 0, k = 0;

    
    while (i < n && j < m) {
        if (nums1[i] < nums2[j])
            res[k++] = nums1[i++];
        else if (nums1[i] > nums2[j])
            res[k++] = nums2[j++];
        else {
            res[k++] = nums1[i++];
            j++;
        }
    }

 
    while (i < n)
        res[k++] = nums1[i++];

  
    while (j < m)
        res[k++] = nums2[j++];

    return res;
}

int main() {
    int nums1[] = {1, 2, 3, 4, 5};
    int nums2[] = {1, 2, 7};
    int n = 5, m = 3;

    int* result = Unionoftwosortedarrays(nums1, n, nums2, m);
    printf("Union: ");
    for (int i = 0; i < n + m; i++)
        printf("%d ", result[i]);
    printf("\n");

    return 0;
}
