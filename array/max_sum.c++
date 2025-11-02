#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>

using namespace std;


int maxSubArray(vector<int>& nums) {

    int max_sum = -1 ;

    int n = nums.size() ;

    if (n == 1) {
        return nums[0] ;
    }

    int sum  = 0 ;

    for (int i = 0 ; i < n ; i ++) {
        sum = sum + nums[i] ;

        if (sum < 0){
            sum = 0 ;
        }

        if (sum > max_sum){

            max_sum = sum ;
        }
    }

    return max_sum ;
    
}



int main(){
    vector<int> nums = {5,4,-1,7,8} ;
    int res  = maxSubArray(nums) ;
    cout<< res;
    return 0;
}