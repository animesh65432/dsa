#include <iostream>
#include <vector>
#include <map>

using namespace std ;

//brute force

// vector<int> solve(vector<int>nums,int n){
//     vector<int> zero_array ;
//     vector<int> one_array ;
//     vector<int> two_array ;
//     vector<int> answer ;


//     int size = nums.size();

   
//     for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] == 0) {
//             zero_array.push_back(nums[i]) ;
//         }
//         else if (nums[i] == 1) {
//             one_array.push_back(nums[i]) ;
//         }
//         else {
//             two_array.push_back(nums[i]) ;
//         }
//     }

//     for (int i = 0; i < zero_array.size(); i++) {
//         answer.push_back(zero_array[i]) ;
//     }

//     for (int i = 0; i < one_array.size(); i++) {
//         answer.push_back(one_array[i]) ;
//     }

//     for (int i = 0; i < two_array.size(); i++) {
//         answer.push_back(two_array[i]) ;
//     }

//     return answer;

    
// }

//Time complexity0(2n) and space complexity 0(2n)

vector<int> solve(vector<int>nums, int n){
    int low = 0; 
    int mid = 0;
    int high = n - 1;

    while (mid <= high) {
        if (nums[mid] == 0){
            swap(nums[mid], nums[low]);
            mid++;
            low++;
        }
        else if(nums[mid] == 2) {
            swap(nums[mid], nums[high]);
            high--;
            // Don't increment mid!
        }
        else{
            mid++;
        }
    }

    return nums;
}
// {1, 0, 2, 1, 0}
//[1,0,2,1,0],mid=1,low=0,high=4
//[0,1,2,1,0]=mid=2low=1,high=3
//[0,1,0,1,2]=mid=3,low=1,high=3


int main(){
    vector<int> nums = {1, 0, 2, 1, 0};
    vector<int>ans = solve(nums,5) ;

    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << std::endl;
    }

    return 0;
}

