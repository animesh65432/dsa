#include <stdio.h>
#include "../math.h"
#include <bits/stdc++.h>
using namespace std;

//brute force
// int Longestsubarraywithsum(int nums[], int n, int k) {

//     int max_len = -1;

//     for (int i = 0; i < n; i++) {

//         for (int j = i; j < n; j++) {

//             int sum = 0;

//             for (int t = i; t <= j; t++) {
//                 sum += nums[t];
//             }

//             if (sum == k) {
//                 int len = j - i + 1;
//                 max_len = max(max_len, len);
//             }
//         }
//     }

//     return max_len;
// }

// 

int Longestsubarraywithsum(vector<int> nums,  int k) {

    int n = nums.size(); // size of the array.

    map<long long, int> preSumMap;

    long long sum = 0;

    int maxLen = 0;
    
    for (int i = 0; i < n; i++) {
        //calculate the prefix sum till index i:
        sum += nums[i];

        // if the sum = k, update the maxLen:
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        long long rem = sum - k;

        //Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        //Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    cout << "Contents of preSumMap:\n";
    for (auto it = preSumMap.begin(); it != preSumMap.end(); ++it) {
        cout << "Key (prefixSum): " << it->first
             << " -> Value (index): " << it->second << endl;
    }


    return maxLen;
}

int main() {
    vector<int> a = {2, 3, 5, 1, 9};
    int k = 15;

    int res = Longestsubarraywithsum(a, k);
    printf("maximum length = %d\n", res);

    return 0;
}
