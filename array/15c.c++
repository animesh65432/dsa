#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>

using namespace std ;

int bruteforce(vector<int>nums,int n){
    for (int i = 0 ; i < n ; i ++){

        int cnt = 1  ;

        for (int j = i + 1; j < n ; j ++){

            if (nums[i] == nums[j]){

                cnt ++ ;
            }
        }

        if(cnt >  n / 2){

            return nums[i] ;
        }
    }
    return -1 ;
}

//Time complexity 0(n^2)

int betterapproach(vector<int>nums,int n){
    map<int, int> MyMap;

    for (int i = 0 ; i < n; i++) {

        if(MyMap.find(nums[i]) != MyMap.end()){

            MyMap[nums[i]] +=1 ;
        }
        else{

            MyMap[nums[i]] = 1  ;
        }
    
    }

    int max_cnt = 0 ;
    int max_num = -1 ;

    for (int i = 0 ; i < n; i++) {
        if(MyMap[nums[i]] > max_cnt){
            max_cnt = MyMap[nums[i]] ;
            max_num = nums[i] ;
        }
    }

    return max_num;
}

//Time complexity 0 (n) and space complexity 0(n)


int main(){
    vector<int>nums = {2,2,1,1,1,2,2} ;
    // bruteforce(nums, nums.size());
    betterapproach(nums, nums.size()) ;
    // std::cout << res << std::endl;
    return 0;
}